//
// Created by JaeZero on 2021.07.13 -- Tuesday at 18:12:29
//
// --> In this file we discuss about UNIONS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//UNIONS: Es similar a simbolos como las clases y estructuras, execpto a que solo puede ocupar
//    la memoria de un miembro a la vez; es decir, Si tenemos una estructura y definimos 4 floats,
//    y eso siginifica que podemos tener 4 veces 4 bytes. En cambio un 'union' solo puede tener un
//    miembro en el. Con el ejemplo anterior de 4 floats en la estructura, el 'union' solo tiene
//    4 bytes de memoria y no 16 como la estructura. Si modificamos el valor de uno de ellos, el resto
//    tambien se modifica porque se esta modificando la misma direccion de memoria.
//Usualmente 'unions' son usados anonimamente; es decir, no se tiene que dar un nombre y por ende no se puede
//    utilizar funciones, metodos, relacionados.
//TL;DR: Unions nos sirve si queremos tener multiples maneras de asignar el mismo dato.

struct Vector2
{
    float x, y;
};

struct vector4
{
    union
    {
        //Tenemos dos maneras de acceder a x, y, z. w.
        struct
        {
            float x, y, z, w;
        };
        struct
        {
            // 'a' tiene la misma direccion de memoria de x, y and 'b' tiene la misma direccion de z, w.
            Vector2 a, b;
        };
    };
};

void PrintVector4(const Vector2 &vector)
{
    std::cout << vector.x << ", " << vector.y << std::endl;
}

int main()
{
#if 0
    struct Unions
    {
        union
        {
            //Lo que tenemos aqui es dos maneras de alocar la misma direccion de memoria.
            float a;
            int b;
        };
    };

    Unions U;
    U.a = 2.0f;

    std::cout << U.a << ", " << U.b << std::endl;
    //La linea arriba nos imprime '2, 10323898'. Esto significa que '1032..' es la representacion de '2'
    //    como un float. En otras palabras se hizo un 'type punning', donde 'b' interpreta al float 'a' como
    //    un 'integer'.
#endif

    vector4 vector = {1.0f, 2.0f, 3.0f, 4.0f};
    PrintVector4(vector.a);
    PrintVector4(vector.b);
    vector.z = 500.0f;
    std::cout << "*------------------------------*" << std::endl;
    PrintVector4(vector.a);
    PrintVector4(vector.b);

    std::cin.get();
    return 0;
}