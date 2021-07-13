//
// Created by JaeZero on 2021.07.09 -- Friday at 23:09:50
//
// --> In this file we discuss about NAMESPACES.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <algorithm>
//NAMESPACE: Su tarea principal es evitar conflicto de nombramientos. Es decir, lo utilizamos
//    cuando queremos llamar simbolos del mismo nombre en diferentes contextos.
//Su uso, se recomienda, debe estar en pequeños scopes como funciones, 'if statement', 'for loop', etc.
//!Sin embargo, nunca debe ser usado en 'header files'.

//SYMBOLS  se refiere a las clases, varibales, funciones, etc.
namespace apple
{
    void print(const std::string &name)
    {
        std::cout << name << std::endl;
    }
}

namespace orange
{
    void print(const char *message)
    {
        std::string temp = message;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}
int main()
{
    apple::print("Hello world!");

    std::cin.get();
    return 0;
}