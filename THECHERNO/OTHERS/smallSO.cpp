//
// Created by 夏禹(XiàYǔ) on 2021.07.19 -- Monday at 22:12:24
//
// --> In this file we discuss about SMALL STRING OPTIMIZATION.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//SSO: De acuerdo a actualizaciones mas recientes, si el 'string' tiene a lo mucho 15 caracteres, este
//    no sera alocado en la memoria heap.
void *operator new(size_t size)
{
    std::cout << "Allocating: " << size << " bytes" << std::endl;
    return malloc(size);
}

int main()
{
    std::string name = "Cherno Small String";

    std::cin.get();
    return 0;
}