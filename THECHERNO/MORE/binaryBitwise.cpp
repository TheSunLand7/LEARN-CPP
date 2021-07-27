//
// Created by 夏禹(XiàYǔ) on 2021.07.26 -- Monday at 18:53:34
//
// --> In this file we discuss about BINARY AND BITWISE OPERATORS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <bitset>
//BITWISE OPERATOR: Nos permite trabajar al nivel binario.
// '& (AND)', '| (OR)', '(XOR)' operadores, actuan sobre dos varibales (o 2 patrones de bits). En otras palabras,
//    tines que haber un 'A & B', 'A 1 B', 'A (XOR) B'. El unico unario es '~' porque solo necesita una variable.

int main()
{
    //Se coloca '0b' antes de escribir numeros binarios.
    int a = 0b101; // 5
    int b = 0b10110;
    b <<= 4;
    int c = a | b;

    std::cout << std::bitset<9>(c) << std::endl;

    std::cin.get();
    return 0;
}