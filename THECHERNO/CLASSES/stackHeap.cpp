//
// Created by JaeZero on 2021.07.07 -- Wednesday at 21:36:10
//
// --> In this file we discuss about STACK AND HEAP MEMORY.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
//Ambas areas de memoria se encuentran en la memoria RAM.
//STACK: Es un area de la memoria que tiene un tamaño predefinido, usualmente 2 Mb.
//HEAP: Es un area de la memoria que tiene un tamaño predefinido, pero que puede aumentar o
//          crecer mientras nuestra aplicacion se ejecuta.

struct Vector3
{
    int x, y, z;

    Vector3()
        : x(10), y(11), z(12) {}
};

int main()
{
    //La comparacion entre ambos se puede ver mejor con Microsoft Visual Studio.
    //Memoria STACK.
    int num = 5;
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    Vector3 vector;

    //Memoria HEAP.
    int *hnum = new int;
    *hnum = 6;
    int *harr = new int[5];
    harr[0] = 1;
    harr[1] = 2;
    harr[2] = 3;
    harr[3] = 4;
    harr[4] = 5;
    Vector3 *hvector = new Vector3();

    delete hnum;
    delete[] harr;
    delete hvector;

    std::cin.get();
    return 0;
}