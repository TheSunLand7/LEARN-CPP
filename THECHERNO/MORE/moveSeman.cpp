//
// Created by 夏禹(XiàYǔ) on 2021.07.20 -- Tuesday at 20:12:36
//
// --> In this file we discuss about MOVE SEMANTICS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <cstring>

//MOVE SEMANTICS: Nos permite mover objetos alrededor. Esto fue posible cuando c++11 introdujo 'lvalue' por
//    referencia.
//En ves de copiar objetos, como se hace normalmente, se debe mover los objetos y asi el rendimiento sera mas
//    alto.

class String
//Como esta clase es especial: no tiene una terminacion de caracter nulo(aunque es implicito).
{
private:
    char *m_Data = NULL;
    uint32_t m_Size = 0;

public:
    String() = default;
    String(const char *string)
    {
        printf("Created!\n");
        m_Size = strlen(string);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }

    String(const String &other)
    {
        printf("Copied!\n");
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    //Move constructor
    String(String &&other) noexcept
    {
        printf("Moved!\n");
        m_Size = other.m_Size;
        //Lo que estamos haciendo aqui es, en ves de alocar memoria en el heap y copiar todo individualmente,
        //    estamos asignando a m_Data el puntero del atributo (char* m_Data).
        m_Data = other.m_Data;

        //Aun implementado lo de arriba, seguimos teniendo dos instacias del string; es decir, que pasa cuando
        //    el string antiguo se elimina; este tomara el dato y tambien lo eliminara y el string nuevo apuntara
        //    a una direccion de memoria eliminada. Para que esto no suceda, debemos hacer que el antiguo string
        //    apunte a un null, para que asi elimine ese null y no afecte al nuevo string.
        other.m_Size = 0;
        other.m_Data = nullptr;
    }

    ~String()
    {
        printf("Destroyed!\n");
        delete m_Data;
    }

    void Print()
    {
        for (uint32_t i = 0; i < m_Size; ++i)
        {
            printf("%c", m_Data[i]);
        }
        printf("\n");
    }
};

class Entity
{
private:
    String m_Name;

public:
    Entity(const String &name)
        : m_Name(name)
    {
    }

    Entity(String &&name)
        //: m_Name(name) //Sigue llamando al copy constructor!
        : m_Name(std::move(name)) //Para que llame al move constructor: std::move.
    {
    }

    void PrintName()
    {
        m_Name.Print();
    }
};

int main()
{
    Entity entity("Cherno");
    entity.PrintName();

    std::cin.get();
    return 0;
}