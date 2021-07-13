//
// Created by JaeZero on 2021.07.13 -- Tuesday at 00:04:18
//
// --> In this file we discuss about SORTING.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <vector>
#include <algorithm>

//SORTING: Se puede ordenar los datos colocando nuestros propios algoritmos, pero tambien podemos utilizar
//     bibliotecas que c++ nos ofrece.

int main()
{
    std::vector<int> values{3, 5, 1, 2, 4};
    //Si no brindamos el tercer argumento, por defecto lo ordenara de menor a mayor.
    //std::sort(values.begin(), values.end());

    //Si queremos de forma descendente:
    //std::sort(values.begin(), values.end(), std::greater<int>());

    //Podemos utilizar lambdas tambien: '<' menor a mayor; '>' contrario.
    std::sort(values.begin(), values.end(), [](int a, int b)
              {
                  if (a == 1)
                      return false;
                  if (b == 1)
                      return true;
                  return a < b;
              });

    for (int &value : values)
    {
        std::cout << value << std::endl;
    }

    std::cin.get();
    return 0;
}