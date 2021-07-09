//
// Created by JaeZero on 2021.07.07 -- Wednesday at 23:34:54
//
// --> In this file we discuss about AUTO KEYBOARD.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//AUTO: Su uso tiene ventajas y desventajas. Por ejemplo, si creamos una funcion que me retorne
//    un string y quiero almacenarlo en una variable, podria colocarlo 'auto' para que detecte automaticamente
//    el tipo de dato que la funcion retorna. Con esa variable podria utilizar funciones que me son permitidas
//    como '.size()', '.find()', etc.; sin embargo, al cambiar de tipo de dato de mi funcion, por ejemplo a 'char',
//    ya no podria utilizar esas funciones y tendria que cambiarlas. Ahi esta el problema.

std::string Getname()
{
    return "Neo";
}
int main()
{
    auto name = Getname();
    int lengthName = name.size(); //Causa error porque el tipo char no tiene la funcion '.size()'.

    std::cout << lengthName << std::endl;

    std::cin.get();
    return 0;
}