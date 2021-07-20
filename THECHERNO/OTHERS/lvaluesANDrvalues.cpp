//
// Created by 夏禹(XiàYǔ) on 2021.07.19 -- Monday at 23:13:09
//
// --> In this file we discuss about LVALUES AND RVALUES.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

// lvaluesANDrvalues:

int &GetValue()
{
    static int val = 10;
    return val;
}

void SetValue(const int &value)
{
}

void PrintName(std::string &name)
{
    std::cout << "[lvalue] " << name << std::endl;
}

void PrintName(std::string &&name)
{
    std::cout << "[rvalue] " << name << std::endl;
}

int main()
{
    //En este ejemplo, el llamado 'lvalue' es, en muchos casos, el que esta a la izquierda del simbolo de
    //    asignacion '=' y el llamado 'rvalue' es el de la derecha de '='. Esto no siempre se aplica; lo veremos
    //    mas a detalle, mas adelante.
    //Aqui tenemos a la variable 'i' que tiene un lugar en la memoria, y a '10' que es un valor y no tiene lugar en
    //    en la memoria o almacenamiento hasta que es asignado a 'i'.
    //int i = 10;
    //No podemos asignar algo a un 'rvalue' (no siempre).
    //10 = i; //No se puede hacer esto.

    //Un 'rvalue' no siempre es un valor, puede ser una funcion.
    //En este caso 'GetValue' retorna un 'rvalue' (valor temporal). Es temporal porque si bien retorna un 'int',
    //    no tiene una locacion de memoria, solo retorna el valor 10.
    //int a = GetValue();

    //Para poder realizar la operacion mostrada (asignar algo a un 'rvalue'), debemos hacer que la funcion 'GetValue'
    //    sea un 'lvalue' y la manera de lograrlo es haciendo que esta funcion retorne un 'lvalue' de referencia.
    //GetValue() = 5;

    //A la funcion 'SetValue' podemos llamarla de diferentes maneras:
    //int i = 10;
    //SetValue(i); //Con un 'lvalue'.
    //SetValue(10); //Con un 'rvalue'. Este 'rvalue' sera usado para crear un 'lvalue' cuando la funcion sea llamada.

    //No se puede tomar un 'lvalue' de referencia de un 'rvalue'. int &a = 10; Esto causa un error. Solamente se
    //    podria hacer si le agregamos 'const'.
    // Esto se explica tambien cuando en la funcion 'SetValue', pasamos el parameter por un 'lvalue' dereferencia.
    //SetValue(10);

    //Para hacer que la funcion acepte tanto a un 'lvalue' como a un 'rvalue', debemos pasar el parametro como
    //    referencia y 'const'.
    int a = 10;
    SetValue(a);
    SetValue(10);

    //VEAMOS EJEMPLOS CON STRINGS.
    std::string firstName = "John";
    std::string lastName = "Doe";

    std::string fullName = firstName + lastName;

    //Esto funciona normal
    //PrintName(fullName);
    //Esto no funciona porque la funcion solo acepta 'lvalues'. Se le agrega 'const' al parametro de la funcion para
    //    que acepte ambos tipos.
    //PrintName(firstName + lastName);

    //Es posible que la funcion solo acepte valores temporales, usando doble referencia '&&'.
    //Esto es bueno, porque podemos tener funciones 'overloading' que solo acepten 'lvalues' y otro 'rvalues'.
    PrintName(firstName + lastName);
    PrintName(firstName);

    //?ESTOS CONCEPTOPS SON MUY UTILES PARA ENTENDER LOS 'MOVE SEMANTICS'.

    std::cin.get();
    return 0;
}