//
// Created by 夏禹(XiàYǔ) on 2021.07.20 -- Tuesday at 22:23:12
//
// --> In this file we discuss about STD::MOVE AND MOVE ASSIGNMENT OPERATOR.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <cstring>

//STD::MOVE: Es lo que queremos hacer cuando queremos convertir un objeto para que sea temporal.
//    En otras palabras, Si necesitamos que una variable existente se convierta a temporal, en el
//    sentido de decirle: tu puedes 'robar' recursos de 'esta' variable en particular. Esto nos permite
//    hacer los 'movimientos' en una variable existente
//MOVE ASSIGNMENT OPERATOR: Lo usamos cuando queremos remover un objeto hacia un objeto existente.

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
        m_Data = other.m_Data;

        other.m_Size = 0;
        other.m_Data = nullptr;
    }

    //Assignment operator
    //Se debe incluir cuando tenemos un move constructor en nuestra clase.
    String &operator=(String &&other) noexcept
    {
        if (this != &other)
        {
            delete m_Data;
            m_Size = other.m_Size;
            m_Data = other.m_Data;

            other.m_Size = 0;
            other.m_Data = nullptr;
        }
        return *this;
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
#if 0
    Entity entity("Cherno");
    entity.PrintName();

    String string = "Hello";
    //'string' se mueve hacia nuevo destino 'dest'.
    //String dest((String &&) string); //Es bueno pero no funciona con tipos como 'auto', en ves usemos std::move.
    //std::move es mas flexible y en el runtime determina el tipo de dato.
    String dest(std::move(string));
#endif

    //Una ves creado nuestro Move assignment operator, debemos testearlo.
    String apple = "Hello";
    String dest;

    std::cout << "Apple: ";
    apple.Print();
    std::cout << "Dest: ";
    dest.Print();

    dest = std::move(apple); //Aqui estamos llamando el assignment operator.
    //dest.operator=(std::move(apple)); //Es lo mismo que arriba.
    //String string = std::move(apple); //Aqui solo estamos creando un nuevo 'String'.

    std::cout << "Apple: ";
    apple.Print();
    std::cout << "Dest: ";
    dest.Print();

    std::cin.get();
    return 0;
}