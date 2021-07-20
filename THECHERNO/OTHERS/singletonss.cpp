//
// Created by JaeZero on 2021.07.19 -- Monday at 20:55:30
//
// --> In this file we discuss about SINGLETONS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//SINGLETON: Es una unica instancia de una clase que tenemos alrededor. En otras palabras, una clase que solo
//    pretenedes que tenga una instancia.
//Es muy util cuando queremos tener funcionalidades que se aplican a un conjunto de datos globales que potencialmente
//    queremos reusar. Ejemplos: Una clase generador de numeros random, en donde solo queremos que nos de un numero
//    random; no queremos que instancie la clase.
//Tiene un comportamiento similar al 'namespace'.

class Random
{
private:
    //Debemos hacer que el constructor sea privado para que no pueda ser instanciada.
    Random() {}
    float m_RandomGenerator = 0.5f;
    float IFloat()
    {
        return m_RandomGenerator;
    }

public:
    Random(const Random &) = delete;
    //Tenemos que proveer una manera de acceder a esta clase estaticamente.
    static Random &Get()
    {
        //Tiene que retornar una sola instancia de 'Singleton'.
        static Random s_instance;
        return s_instance;
    }
    static float Float()
    {
        return Get().IFloat();
    }
};

int main()
{
    float number = Random::Float();
    std::cout << number << std::endl;

    std::cin.get();
    return 0;
}