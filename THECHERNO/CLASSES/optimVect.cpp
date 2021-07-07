//
// Created by JaeZero on 2021.07.06 -- Tuesday at 23:36:05
//
// --> In this file we discuss about OPTIMIZING STD::VECTOR.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <vector>
//STD::VECTOR: Para poder optimizar nuestro vector, debemos saber como es que funciona realmente y como
//    podemos modificarlo para que funcione mejor.
//Cuando agregamos elementos al vector y si este no tiene la suficiente capacidad para contener al nuevo
//    elemento, lo que hace es alocarse en una nueva direccion de memoria con la capacidad necesaria para
//    contener al nuevo elemento y a los que ya estaban; luego copia todos los elementos antiguos y el nuevo
//    en esa nueva direccion de memoria y elimina la antigua direccion de memoria. Esto causa que el programa
//    sea mas lento. Para que no ocurra eso, tenemos que evitar copiar los objetos.
struct Vertex
{
    float x, y, z;
    Vertex(float _x, float _y, float _z)
        : x(_x), y(_y), z(_z)
    {
    }
    //Creamos un copy constructor para saber cuantas veces estamos copiando objetos.
    Vertex(const Vertex &vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied!" << std::endl;
    }
};

int main()
{
    //SI compilamos este archivo, nos va a imprimir que hemos copiado 6 veces!.
    //Esto pasa porque estamos construyendo nuestro vector dentro de la funcion main y luego
    //    se copia de main hacia el vector.
    std::vector<Vertex> vertices;
    //Para optimizar podemos decirle a 'vertices' que tenga la capacidad para alamcenar 3 objetos
    //     mediante la funcion 'reserve'.
    vertices.reserve(3);
    //vertices.push_back(Vertex(1, 2, 3));
    //vertices.push_back(Vertex(4, 5, 6));
    //vertices.push_back(Vertex(7, 8, 9));
    //SIn embargo, esto aun nos sigue copiando 3 veces. LO que podemos hacer es: En ves de que se copie
    //    desde main, se agregue de frente a nuestro vector y eso lo alcanzamos con la funcion 'emplace_back'.
    //Para mejorarlo aun mas, en ves de pasar un objeto Vertex que hemos construido como parametro, podemos
    //    pasar solo la lista de parametros para el constructor.
    //Esto significa: Construye objetos con los siguientes parametros directamente a la direccion de memoria de
    //    nuestro vector.
    //COn esto tenemos 0 copias!
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);

    std::cin.get();
    return 0;
}