//
// Created by 夏禹(XiàYǔ) on 2021.07.22 -- Thursday at 17:26:32
//
// --> In this file we discuss about ITERATORS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <vector>
#include <unordered_map>
//ITERATORS: Es una manera de iterar sobre una coleccion de elementos. Estos son obligatorios cuando tenemos
//    otros tipos de datos que no tienen un indexado simple.

int main()
{
    /* std::vector<int> values{5, 4, 3, 2, 1};

    //Esta 'data structure' se puede iterar de 3 maneras.
    for (int i = 0; i < values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }

    //Esta es una version corta del loop below. Este loop es mas usado.
    for (auto &&value : values)
    {
        std::cout << value << std::endl;
    }

    //Esto es usado cuando queremos manioular la posicion del iterador. Un ejemplo seria cuando
    //    queremos eliminar un elemento pero queremos seguir iterando sobre los demas datos., o
    //    tambien cuando queremos agreagr un elemento bajo ciertas condiciones.
    for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
    {
        std::cout << *it << std::endl;
    } */

    //Un ejemplo en el que iterar con la 3 forma es obligatorio.
    using ScoreMap = std::unordered_map<std::string, int>;
    ScoreMap map;

    map["Cherno"] = 5;
    map["C++"] = 2;

    for (ScoreMap::const_iterator it = map.begin(); it != map.end(); ++it)
    {
        std::cout << it->first << " = " << it->second << std::endl;
    }

    std::cout << "---------------------------" << std::endl;

    //Solo valido en C++17
    for (auto [key, value] : map)
    {
        std::cout << key << " = " << value << std::endl;
    }

    std::cin.get();
    return 0;
}