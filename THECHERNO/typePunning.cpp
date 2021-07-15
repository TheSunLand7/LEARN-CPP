//
// Created by JaeZero on 2021.07.13 -- Tuesday at 00:46:58
//
// --> In this file we discuss about TYPE PUNNING.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//TYPE PUNNING: Es una manera elegante de abordar los tipos de datos del sistema.

struct Entity
{
    int x, y;

    int *GetPosition()
    {
        return &x;
    }
};
int main()
{
    //int a = 50;
    //Lo que estamos haciendo aqui es 'type punning'(modificando) el 'integer' a 'double'.
    //Esto es muy peligroso y causa errores cuando hacemos debug.
    //double value = *(double *)&a;
    Entity entity{5, 8};
    int *position = entity.GetPosition();

    int y = *(int *)((char *)&entity + 4);

    std::cout << y << std::endl;

    std::cin.get();
    return 0;
}