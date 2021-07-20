//
// Created by JaeZero on 2021.07.16 -- Friday at 18:27:11
//
// --> In this file we discuss about MULTIPLES TYPES OF DATA IN A SINGLE VARIABLE.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <experimental/variant> //TODO: STL estan en desarrollo actualmente.

//MULTIPLE TYPES OF DATA IN A SINGLE VARIABLE: Es algo nuevo en c++17. Se puede hacer en STL, con el
//    llamado 'std:variant'.

enum class ErrorCode
{
    None = 0,
    NotFound = 1,
    NoAccess = 2
};

std::experimental::variant<std::monostate, std::string, ErrorCode> ReadFileAsString()
{
    return {};
}

int main()
{
    std::experimental::variant<std::string, int> data("Cherno");
    std::cout << std::get<std::string>(data) << std::endl;

    //Si queremos imprimir 'data' como si fuera un string, nos daria un error.
    //Para solucionar esto podemos hacer 2 cosas: Verificar que 'data' es un string con
    //    la funcion 'index()'. En este caso me devolvera 1, porque es un 'int'.
    //data.index();
    //La segunda manera es usando la funcion 'get_if()'. Podemos ponerlo en un 'if statment'.

    if (auto value = std::get_if<std::string>(&data)) //Esto retorna un pointer.
    {
        std::string &str = *value;
    }
    data = 2;

    std::cout << std::get<std::string>(data) << std::endl;
    std::cout << std::get<int>(data) << std::endl;

    std::cin.get();
    return 0;
}