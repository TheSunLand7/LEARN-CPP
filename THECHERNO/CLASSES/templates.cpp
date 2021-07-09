//
// Created by JaeZero on 2021.07.07 -- Wednesday at 20:57:00
//
// --> In this file we discuss about TEMPLATES.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//TEMPLATES: Nos permite definir un molde que sera compilado de acuerdo al uso que se le de.
//Le decimos al compilador que escriba codigo por nosotros basado en ciertas reglas.
//los templates son evaluados al tiempo de compilacion.

template <typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}

//Templates no solo funciona con 'funciones' sino tambien con clases.
template <typename T, int N>
class Array
{
private:
    T m_Array[N];

public:
    int GetArray() const { return N; }
};

int main()
{
    Print<int>(5);
    Array<int, 5> array;
    std::cout << array.GetArray() << std::endl;

    std::cin.get();
    return 0;
}