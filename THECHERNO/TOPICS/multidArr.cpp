//
// Created by JaeZero on 2021.07.12 -- Monday at 22:59:57
//
// --> In this file we discuss about MULTIDIMENSIONAL ARRAY.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//MULTIDIMENSIONAL ARRAY

int main()
{
    //Aqui estamos separando 200 bytes de memoria, no integers. No hemos inicializado nada aun.
    int **a2d = new int *[5];
    for (int i = 0; i < 5; ++i)
    {
        //Hemos alocado 50 arrays y la direccion de memoria de cada array esta almacenado dentro de 'a2d'.
        a2d[i] = new int[5];
    }

    //Este metodo es mas lento que el de abajo porque cada vez que salimos de un for loop, tiene que ir a una
    //    direccion de memoria diferente por cada array.
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
            a2d[i][j] = 2;
    }

    //3D array.
    /*int ***a3d = new int **[50];
    for (int i = 0; i < 50; ++i)
    {
        a3d[i] = new int *[50];
        for (int j = 0; j < 50; ++j)
        {
            int **ptr = a3d[i];
            ptr[j] = new int[50];
        }
    }*/

    //Para liberar memoria de los arrays se debe hacer un loop.
    for (int m = 0; m < 5; ++m)
        delete[] a2d[m];
    delete[] a2d;

    //Este esta accediendo a la misma direccion de memoria en una sola fila.
    int *array = new int[5 * 5];
    for (int m = 0; m < 5; ++m)
    {
        for (int n = 0; n < 50; ++n)
        {
            array[m + n * 5] = 2;
        }
    }

    std::cin.get();
    return 0;
}