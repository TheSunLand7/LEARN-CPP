//
// Created by JaeZero on 2021.07.08 -- Thursday at 00:48:37
//
// --> In this file we discuss about FUNCTION POINTERS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//FUNCTION POINTERS: Es una manera de asignar una funcion a una variable.
//Las funciones son solo instrucciones de CPU.

/*void HelloWorld()
{
    std::cout << "Hello World!" << std::endl;
}
int main()
{
    //Causa un error en el 'auto' porque la funcion 'HelloWorld' retorna void(nada) y el 'auto' no puede
    //    deducir que tipo de dato se retorn al llamar esa funcion.
    //auto function = HelloWorld();

    //En cambio, si borramos los parentesis el problema se soluciona, y esto es porque no estamos llamando
    //    la funcion, sino que estamos obteniendo el puntero de la funcion. Al colocar el '&' estariamos
    //    obteniendo la direccion de memoria de la función.
    //auto function = &HelloWorld;

    //El verdadero tipo de dato de 'function' es:
    //void (*function)(); //function es el nombre de la variable, puede ser cualquiera.
    //function = &HelloWorld;

    //Podemos limpiar mas el codigo, asignando directamente la funcion pointer al tipo de dato.
    //void (*function)() = &HelloWorld;
    //function();
    //Esto puede ser extraño y lo podemos 'personalizar' usando un 'typedef', 'using'; es decir un alias.
    typedef void (*HelloWorldfunction)();
    HelloWorldfunction function = &HelloWorld;
    function();

    std::cin.get();
    return 0;
}*/

#include <vector>

//void Print(int value)
//{
//    std::cout << "Value: " << value << std::endl;
//}
void ForEach(std::vector<int> &values, void (*function)(int))
{
    for (int &v : values)
    {
        function(v);
    }
}
int main()
{
    std::vector<int> values{5, 4, 3, 2, 1};
    //ForEach(values, Print);
    //Podemos utilizar lambda function para limpiar mas el codigo. Con esto se elimina la funcion 'Print'.
    ForEach(values, [](int value)
            { std::cout << "Value: " << value << std::endl; });

    std::cin.get();
    return 0;
}