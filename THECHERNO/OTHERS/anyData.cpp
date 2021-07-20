//
// Created by JaeZero on 2021.07.16 -- Friday at 21:22:09
//
// --> In this file we discuss about HOW TO STORE ANY DATA.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <experimental/any>

//STORE ANY DATA: Se logra con el STL 'std::any'. Solo disponible en c++17 en adelante.

int main()
{
    std::experimental::any data;
    data = 2;
    data = std::string("Cherno");

    std::string &result = std::experimental::any_cast<std::string &>(data);

    std::cin.get();
    return 0;
}