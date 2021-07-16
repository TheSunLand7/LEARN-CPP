//
// Created by JaeZero on 2021.07.13 -- Tuesday at 19:16:54
//
// --> In this file we discuss about VIRTUAL DESTRUCTORS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//VIRTUAL DESTRUCTORS: Es muy importante cuando tratamos con polimofirmos.

class Base
{
public:
    Base() { std::cout << "Base constructor\n"; }
    //Lo que hace este virtual es dar la posibilidad de que existe una subclase y su destructor deba ser llamado.
    virtual ~Base() { std::cout << "Base destructor\n"; }
};

class Derived : public Base
{
private:
    int *m_Array;

public:
    Derived()
    {
        m_Array = new int[10];
        std::cout << "Derived constructor\n";
    }
    ~Derived()
    {
        delete[] m_Array;
        std::cout << "Derived destructor\n";
    }
};
int main()
{
    Base *base = new Base();
    delete base;
    std::cout << "*-------------------------*\n";
    Derived *derived = new Derived();
    delete derived;
    //hasta aqui todo es como lo esperado: se llama al constructor base y derived y a los destructores.
    std::cout << "*-------------------------*\n";
    //En cambio las lineas de abajo solo llama al constructor y destructor base y constructor derived pero
    //    pero no a su destructor. Esto se soluciona con el 'virtual destructor'.
    //Se esta tomando al objeto'poly' como un puntero hacia'Bse' cuando es un puntero hacia 'Derived'.
    Base *poly = new Derived(); //Estamos instanciando 'Derived' pero se le asigna el tipo 'Base'.
    delete poly;

    std::cin.get();
    return 0;
}