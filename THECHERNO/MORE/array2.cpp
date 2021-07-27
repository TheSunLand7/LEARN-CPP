//
// Created by 夏禹(XiàYǔ) on 2021.07.21 -- Wednesday at 17:43:07
//
// --> In this file we discuss about ARRAY: DATA STRUCTURES.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <cstring>

//ARRAYS:

template <typename T, size_t S>
class Array
{
private:
    T m_Data[S];

public:
    //constexpr significa que esta funcion puede ser evaluado al tiempo de compilacion.
    //Esta funcion retorna el valor de 'S', como es.
    constexpr int Size() const { return S; }
    T operator[](size_t index) { return m_Data[index]; }
    const T &operator[](size_t index) const { return m_Data[index]; }
    //Tambien podemos retornar el array. Al agregar estas funciones nos permiten, por ejemplo,
    //    asignar valores inciales a '0' para que no imprima valores aleatorios.
    T *Data() { return m_Data; }
    const T *Data() const { return m_Data; }
};

int main()
{
    Array<int, 5> data;
    //Nos permite verificar que el array no pase de cierto tamaño.
    static_assert(data.Size() < 10, "Size is too large");

    //Nos permite asignar valores predeterminados al array.
    memset(data.Data(), 0, data.Size() * sizeof(int));

    for (size_t i = 0; i < data.Size(); ++i)
    {
        //Para poder utilizar el operador '[]' tenemos que 'overloading'.
        std::cout << data[i] << std::endl;
    }

    std::cin.get();
    return 0;
}