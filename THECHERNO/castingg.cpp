//
// Created by JaeZero on 2021.07.14 -- Wednesday at 18:36:24
//
// --> In this file we discuss about CASTING.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//CASTING: Nos referimos a 'type casting'.
//Cualquier conversion que tenemos que hacer dentro del 'type system'; es decir, convertir una expresion con
//    un tipo de dato definido, a otro tipo de dato.

class Base
{
public:
    Base() {}
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    Derived() {}
    ~Derived() {}
};

class AnotherClass : public Base
{
public:
    AnotherClass() {}
    ~AnotherClass() {}
};
int main()
{
#if 0
    //Existen 2 maneras de hacer la conversion de tipos de datos explicitamente.
    //Este es la manera del lenguaje 'C'.
    double value = 5.23;
    double a = (int)value + 5.2;

    //Este es la manera del lenguaje 'C++'. Existen 4 maneras de hacerlo; tenemos el 'static_cast',
    //    'reinterpret_cast', 'dynamic_cast' y 'const_cast'.
    double s = static_cast<int>(value) + 5.2;
#endif
    Derived *derived = new Derived();
    Base *base = dynamic_cast<Base *>(derived); //Converting derived to base.
    //Converting base to derived. Esto solo funciona si la clase base es polimorfica.
    Derived *ac = dynamic_cast<Derived *>(base);

    //TODO: Practicar un poco mas.
    std::cin.get();
    return 0;
}