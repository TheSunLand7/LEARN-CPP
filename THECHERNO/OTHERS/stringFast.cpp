//
// Created by JaeZero on 2021.07.19 -- Monday at 16:18:49
//
// --> In this file we discuss about STRING FASTER.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <experimental/string_view>

//STRINGS: Una de las cosas 'poco amigables' de los strings es que reservan memoria en el heap.
//Cuando se trabaja con pocos strings es insignificante pero si es con muchos datos, ahi se convierte
//    en un rpoblema.

//Numero de alocaciones.
static uint32_t s_AllocCount = 0;

void *operator new(size_t size)
{
    //Cada vez que reserva memoria en el heap.
    s_AllocCount++;
    //Cuan grande fue la reserva de memoria en el heap.
    std::cout << "Allocating: " << size << "bytes" << std::endl;
    //Alocacion basica de memoria.
    return malloc(size);
}
#define STRING_VIEW 1
#if STRING_VIEW
void PrintName(std::experimental::string_view name)
{
    std::cout << name << std::endl;
}
#else
void PrintName(const std::string &name)
{
    std::cout << name << std::endl;
}
#endif
int main()
{
    //Veamos cuantos reservas de memoria en el heap obtenemos con la siguiente operacion.
    //Para lograrlo tenemos que crear un overloading al operador 'new'.
    //std::string name = "Yan Chernikov";
    std::string name = "Yan Chernikov";

#if STRING_VIEW
    //Esto lo podemos 'mejorar' (Aunque de hecho al ejecutar el programa no se reserva memoria en el heap.).
    //Lo podemos mejorar con 'stdd::string_view'.
    std::experimental::string_view FirstName(name.c_str(), 3);
    std::experimental::string_view LastName(name.c_str() + 4, 9);
#else
    std::string FirstName = name.substr(0, 3);
    std::string LastName = name.substr(4, 9);
#endif
    PrintName(FirstName);
    PrintName(LastName);
    PrintName("Cherno");

    std::cout << s_AllocCount << " Allocations" << std::endl;
    std::cin.get();
    return 0;
}