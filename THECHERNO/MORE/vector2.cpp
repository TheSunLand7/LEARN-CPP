//
// Created by 夏禹(XiàYǔ) on 2021.07.21 -- Wednesday at 19:09:05
//
// --> In this file we discuss about VECTORS.
//
// COMMENTS BELOW ARE IN SPANISH
//

//TODO: ANALIZAR A PROFUNDO ESTE DATA STRUCTURE!!!!!!!!!!
//*IMPLEMENTAR LA FUNCION ERASE.

#include <iostream>
#include <vector>
//VECTORS: Es una array que se puede modificar (su tamaño). Se aloca en el heap.

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
            newBlock[i] = std::move(m_Data[i]);

        for (size_t i = 0; i < m_Size; ++i)
            m_Data[i].~T();

        ::operator delete(m_Data, m_Capacity * sizeof(T));
        m_Data = newBlock;
        m_Capacity = newCapacity;
    }

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
};

struct Vector3
{
    float x = 0.0f, y = 0.0f, z = 0.0f;
    int *m_MemoryBlock = NULL;

    Vector3() { m_MemoryBlock = new int[5]; }
    Vector3(float scalar)
        : x(scalar), y(scalar), z(scalar)
    {
        m_MemoryBlock = new int[5];
    }
    Vector3(float x, float y, float z)
        : x(x), y(y), z(z)
    {
        m_MemoryBlock = new int[5];
    }

    //Copy constructor
    Vector3(const Vector3 &other) = delete;
    // : x(other.x), y(other.y), z(other.z) { std::cout << "Copied!\n"; }

    //Move constructor
    Vector3(Vector3 &&other)
        : x(other.x), y(other.y), z(other.z)
    {
        m_MemoryBlock = other.m_MemoryBlock;
        other.m_MemoryBlock = nullptr;
        std::cout << "Moved!\n";
    }
    ~Vector3()
    {
        std::cout << "Destroyed!\n";
        delete[] m_MemoryBlock;
    }

    Vector3 &operator=(const Vector3 &other) = delete;
    /* {
        std::cout << "Copied!\n";
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    } */

    Vector3 &operator=(Vector3 &&other)
    {
        std::cout << "Moved!\n";
        m_MemoryBlock = other.m_MemoryBlock;
        other.m_MemoryBlock = nullptr;
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
};

template <typename T>
void PrintVector(const Vector2<T> &vector)
{
    for (size_t i = 0; i < vector.Size(); ++i)
    {
        std::cout << vector[i] << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;
}

//Cuando utilizamos el tipo Vector3.
template <>
void PrintVector(const Vector2<Vector3> &vector)
{
    for (size_t i = 0; i < vector.Size(); ++i)
    {
        std::cout << vector[i].x << ", " << vector[i].y << ", " << vector[i].z << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;
}

int main()
{
    //Vector2<std::string> vector;
    //vector.PushBack("Hello");
    //vector.PushBack("Cherno");
    //vector.PushBack("Chernikov");
    {
        //Cuando realizamos la operacion, notamos que se copia y tenemos que reducirlo.
        Vector2<Vector3> vector;
        //vector.PushBack(Vector3(1.0f));
        //vector.PushBack(Vector3(2, 4, 5));
        //vector.PushBack(Vector3());
        vector.EmplaceBack(1.0f);
        vector.EmplaceBack(2, 4, 5);
        vector.EmplaceBack(1, 4, 5);
        vector.EmplaceBack();
        PrintVector(vector);

        vector.PopBack();
        vector.PopBack();
        PrintVector(vector);

        vector.EmplaceBack(5, 2, 0);
        vector.EmplaceBack(6, 3, 8);
        PrintVector(vector);

        vector.Clear();
        PrintVector(vector);

        vector.EmplaceBack(5, 2, 0);
        vector.EmplaceBack(6, 3, 8);

        PrintVector(vector);
    }

    Vector2<int> intVector;
    intVector.PushBack(5);
    intVector.PushBack(2);
    intVector.PushBack(1);
    intVector.EmplaceBack(9);
    intVector.EmplaceBack(9);
    intVector.EmplaceBack(9);
    PrintVector(intVector);
    intVector.PopBack();
    PrintVector(intVector);
    intVector.Clear();

    std::cin.get();
    return 0;
}