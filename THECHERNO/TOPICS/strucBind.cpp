//
// Created by JaeZero on 2021.07.15 -- Thursday at 22:38:02
//
// --> In this file we discuss about STRUCTURED BINDINGS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <tuple>

//STRUCTURED BINDINGS: Son una 'version mejorada' de los 'data structures'. Mejoran algunas STL como las tuplas.

std::tuple<std::string, int> CreatePerson()
{
    return {"Joe", 22};
}

int main()
{
    /*//Creamos nuestra tupla normal y accedemos a las variables de la funcion. No es una manera 'rapida de acceder'.
    std::tuple<std::string, int> person = CreatePerson();
    std::string &name = std::get<0>(person);
    int age = std::get<1>(person);

    //Con la funcion tie(), se hace decente el acceso a las variables de la funcion CreatePerson().
    std::string name;
    int age;
    std::tie(name, age) = CreatePerson();*/

    //Eso se podria mejorar aun mas con los 'structured bindigs'. Es solo esta disponible en c++17 en adelante.
    auto [name, age] = CreatePerson(); //Esto realmente luce limpio y facil de leer.
    std::cout << name;

    std::cin.get();
    return 0;
}