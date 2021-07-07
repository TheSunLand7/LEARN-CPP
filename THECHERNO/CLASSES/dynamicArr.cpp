//
// Created by JaeZero on 2021.07.06 -- Tuesday at 17:37:20
//
// --> In this file we discuss about DYNAMIC ARRAYS (STD::VECTOR).
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <vector>
//:
struct Vertex
{
    float x, y, z;
};

std::ostream &operator<<(std::ostream &os, Vertex const &vertex)
{
    os << vertex.x << ", " << vertex.y << ", " << vertex.z << "\n";
    return os;
}

//Si queremos pasar el vector como argumento en una function, debemos pasarlo como referencia.
void PrintVector(std::vector<Vertex> &vertices)
{
    for (Vertex &v : vertices)
        std::cout << v << std::endl;
}

int main()
{
    //Creamos un 'dynamic array'.
    std::vector<Vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});
    PrintVector(vertices);

    for (int i = 0; i < vertices.size(); ++i)
        std::cout << vertices[i] << std::endl;
    //Mucho mas simple con el for each loop.
    //for (Vertex &v : vertices)
    //    std::cout << v << std::endl;
    vertices.erase(vertices.begin() + 1);
    for (Vertex &v : vertices)
        std::cout << v << std::endl;

    std::cin.get();
    return 0;
}