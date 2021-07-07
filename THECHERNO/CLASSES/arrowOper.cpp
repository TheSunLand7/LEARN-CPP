//
// Created by JaeZero on 2021.07.05 -- Monday at 23:18:14
//
// --> In this file we discuss about ARROW OPERATOR.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//ARROW OPERATOR: Simplifica la dereferencia de un pointer.
/*
class Entity
{
private:
    int x;

public:
    void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr //Esta clase eliminara 'entity' cuando sale del scope.
{
private:
    Entity *m_Obj;

public:
    ScopedPtr(Entity *entity)
        : m_Obj(entity) {}
    ~ScopedPtr()
    {
        delete m_Obj;
    }

    //Entity *GetObject() { return m_Obj; }
    Entity *operator->() { return m_Obj; }
    const Entity *operator->() const { return m_Obj; }
};
int main()
{
    //Entity entity;
    //entity.Print();

    //Si creamos un objeto como pointe y le asignamos 'entity', ocurrira un error al llamar 'Print' desde
    //    el pointer creado.
    //Entity *ptr = &entity;
    //No se puede llamar a 'Print', porque 'ptr' solo es un pointer, es solo un valor numerico. Para poder realizar
    //    la llamada se debe dereferenciarlo primero.
    //ptr.Print();
    //Entity &e = *ptr; //Para eliminar este paso extra simplemente podemos dereferenciar 'ptr' directamente: '(*ptr)'.
    //*ptr.Print(); //No podemos dereferenciarlo asi debido a 'operator precedence' (Investigar un poco!). Lo que hace
    //    esto es llamar a 'Print' y dereferenciar su resultado (No va a funcionar).
    //(*ptr).Print(); //Esta es la manera correcta de dereferenciarlo. Pero podemos mejorarlo con operador '->'.
    //ptr->Print();

    //ScopedPtr entity = new Entity();
    //Para poder acceder al metodo 'Print', tenemos 4 opciones: 1. hacer que 'ScopedPtr sea una subclase de 'Entity'.
    //    2. Crear un metodo que retorne 'm_Obj'.
    //entity.GetObject()->Print();
    //QUeremos ser capaz de usar 'entity' como si fuera del tipo 'Entity'.
    //Entity *entity = new Entity();
    //    3. Crear un overloading para '->'.
    const ScopedPtr entity = new Entity(); //SI queremos modificarlo a 'const', tambien debemos crear una version
                                           //'const'.
    entity->Print();                       //Ahora si funciona.

    std::cin.get();
    return 0;
}*/

//OTRO USO DEL ARROW OPERATOR: Para obtener el 'offset' de una cierta variable en memoria.
struct Vector3
{
    float x, y, z;
};

int main()
{
    int theOffset = (long)&((Vector3 *)nullptr)->x; //!Necesito encontrar una solucion!
    std::cout << theOffset << std::endl;

    std::cin.get();
    return 0;
}