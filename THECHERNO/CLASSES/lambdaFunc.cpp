//
// Created by JaeZero on 2021.07.08 -- Thursday at 20:40:18
//
// --> In this file we discuss about LAMBDA FUNCTIONS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <vector>
#include <algorithm>
//LAMBDA FUNCTION: Es una manera de definir algo que nos gustaria llamar en una funcion anonima.
//  En otras palabras, es una manera de crear una funcion sin crear explicitamente una funcion.
//Cada vez que tengamos una funcion pointer, podemos usar lambdas.

void ForEach(std::vector<int> &values, void (*function)(int))
{
    for (int &v : values)
    {
        function(v);
    }
}

int main()
{
    std::vector<int> values = {1, 2, 3, 4, 5};
    auto it = std::find_if(values.begin(), values.end(), [](int value)
                           { return value > 3; });
    std::cout << *it << std::endl;
    //Veamos las partes por la cual esta formado el lambda.
    //En primer lugar tenemos '[]', el capturador. Este permite que variables fuera de la funcion
    //    puedan ser usadas dentro del lambda. Estas variables pueden ser pasadas por valor o referencia.
    //Luego tenemos a'()', es donde van los parametros. Despues de esto se puede agregar 'mutable' si pretendemos
    //    modificar las variables que fueron pasados por valor.
    auto lambda = [](int value)
    { std::cout << "Value: " << value << std::endl; };

    ForEach(values, lambda);

    std::cin.get();
    return 0;
}