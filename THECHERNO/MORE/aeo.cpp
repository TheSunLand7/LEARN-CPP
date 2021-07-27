//
// Created by 夏禹(XiàYǔ) on 2021.07.20 -- Tuesday at 19:24:20
//
// --> In this file we discuss about ARGUMENT EVALUATING ORDER.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//ARGUMENT EVALUATION ORDER: El orden en el que se evalua los argumentos es 'indefinido' (no definido).
//Esto es debido a que las especificaciones de c++ no proveyeron una definicion que deberia pasar en la
//    situacion de que orden de parametros deberian ser evaluados. C++17 menciona una luz en el que los
//    argumentos no deben ser evaluados al mismo tiempo, deben ser evaluados uno despues de otro.

void PrintSum(int a, int b)
{
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
}

int main()
{
    int value = 0;
    PrintSum(value++, value++); // 1 0

    std::cin.get();
    return 0;
}