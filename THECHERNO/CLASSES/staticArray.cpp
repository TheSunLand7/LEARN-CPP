//
// Created by JaeZero on 2021.07.08 -- Thursday at 00:23:22
//
// --> In this file we discuss about STATIC ARRAYS (STD::ARRAY).
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <array>
//STATIC ARRAYS: Es la version mejorada del array normal. (STL)
//Tiene mas performance, es rapido y en el modo debug te alerta sobre posibles faltas.

int main()
{
    //Creamos nuestro array
    std::array<int, 5> data;
    data[0] = 0;

    std::cin.get();
    return 0;
}