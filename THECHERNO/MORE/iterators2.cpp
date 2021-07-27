//
// Created by 夏禹(XiàYǔ) on 2021.07.22 -- Thursday at 18:14:25
//
// --> In this file we discuss about MORE ITERATORS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//TODO: HACER ITERADORES PARA OTRO MAP Y OTROS TIPOS QUE SE PUEDAN.
template <typename Vector2>
class VectorIterator
{
public:
    using ValueType = typename Vector2::ValueType;
    using PointerType = ValueType *;
    using ReferenceType = ValueType &;

public:
    VectorIterator(PointerType ptr)
        : m_Ptr(ptr) {}

    VectorIterator &operator++()
    {
        m_Ptr++;
        return *this;
    }

    //Post fix operator.
    VectorIterator operator++(int)
    {
        VectorIterator iterator = *this;
        ++(*this);
        return iterator;
    }

    VectorIterator &operator--()
    {
        m_Ptr--;
        return *this;
    }

    //Post fix operator.
    VectorIterator operator--(int)
    {
        VectorIterator iterator = *this;
        --(*this);
        return iterator;
    }

    ReferenceType operator[](int index)
    {
        return *(m_Ptr + index);
    }

    PointerType operator->()
    {
        return m_Ptr;
    }

    ReferenceType operator*()
    {
        return *m_Ptr;
    }

    bool operator==(const VectorIterator &other) const
    {
        return m_Ptr == other.m_Ptr;
    }

    bool operator!=(const VectorIterator &other) const
    {
        return !(*this == other);
    }

private:
    PointerType m_Ptr;
};

template <typename T>
class Vector2
{
private:
    T *m_Data = NULL;
    int m_Size = 0;
    //Cuanta memoria hemos alocado en el heap. Esto necesario porque vamos a estar
    //    modificando el tamaño del vector(ya sea por agregar o eliminar).
    int m_Capacity = 0;

private:
    void ReAlloc(size_t newCapacity)
    {
        //1. Allocar un nuevo bloque de memoria
        //2. Copiar/mover
        //3. Eliminar
        T *newBlock = (T *)::operator new(newCapacity * sizeof(T));

        if (newCapacity < m_Size)
            m_Size = newCapacity;

        for (size_t i = 0; i < m_Size; ++i)
            new (&newBlock[i]) T(std::move(m_Data[i]));

        for (size_t i = 0; i < m_Size; ++i)
            m_Data[i].~T();

        ::operator delete(m_Data, m_Capacity * sizeof(T));
        m_Data = newBlock;
        m_Capacity = newCapacity;
    }

public:
    using ValueType = T;
    using Iterator = VectorIterator<Vector2<T>>;

public:
    Vector2()
    {
        //Alocar 2 elementos
        ReAlloc(2);
    }

    ~Vector2()
    {
        Clear();
        ::operator delete(m_Data, m_Capacity * sizeof(T));
    }

    void PushBack(const T &value)
    {
        if (m_Size >= m_Capacity)
            ReAlloc(m_Capacity + (m_Capacity / 2));

        m_Data[m_Size] = value;
        m_Size++;
    }

    void PushBack(T &&value)
    {
        if (m_Size >= m_Capacity)
            ReAlloc(m_Capacity + (m_Capacity / 2));

        m_Data[m_Size] = std::move(value);
        m_Size++;
    }

    template <typename... Args>
    T &EmplaceBack(Args &&...args)
    {
        if (m_Size >= m_Capacity)
            ReAlloc(m_Capacity + (m_Capacity / 2));
        //Construimos T, y llevamos todos los argumentos al constructor y desempacamos(...).
        //m_Data[m_Size] = T(std::forward<Args>(args)...);

        //Pero en ves crear y mover T, podemos solo crear T directamente en m_Data. (tip avanzado)
        new (&m_Data[m_Size]) T(std::forward<Args>(args)...);
        return m_Data[m_Size++];
    }

    void PopBack()
    {
        if (m_Size > 0)
        {
            m_Size--;
            //Despues de eliminar un elemento debemos llamar explicitamente al destructor.
            //Despues de este punto ya no tendremos referencia de T.
            m_Data[m_Size].~T();
        }
    }

    void Clear()
    {
        for (size_t i = 0; i < m_Size; ++i)
            m_Data[i].~T();

        m_Size = 0;
    }

    T &operator[](size_t index) { return m_Data[index]; }
    const T &operator[](size_t index) const { return m_Data[index]; }
    size_t Size() const { return m_Size; }

    Iterator begin()
    {
        return Iterator(m_Data);
    }

    Iterator end()
    {
        return Iterator(m_Data + m_Size);
    }
};

int main()
{
    Vector2<std::string> values;
    values.EmplaceBack("1");
    values.EmplaceBack("2");
    values.EmplaceBack("Cheers");
    values.EmplaceBack("4");
    values.EmplaceBack("5");

    std::cout << "Not using iterators!\n";
    for (int i = 0; i < values.Size(); ++i)
    {
        std::cout << values[i] << std::endl;
    }

    std::cout << "Range-based for loop:\n";
    for (auto &value : values)
    {
        std::cout << value << std::endl;
    }

    std::cout << "Iterators!\n";
    for (Vector2<std::string>::Iterator iter = values.begin(); iter != values.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }

    std::cin.get();
    return 0;
}