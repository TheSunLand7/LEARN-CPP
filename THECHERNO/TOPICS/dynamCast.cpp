//
// Created by JaeZero on 2021.07.14 -- Wednesday at 22:44:09
//
// --> In this file we discuss about DYNAMIC CAST.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

// DYNAMIC CAST: Es usado para ''cast' a traves de la jerarquia heredada.
//Solo se puede usar con punteros y referencias a objetos. Su propósito es asegurar que el resultado
//    de la conversión de tipo sea un objeto completo válido de la clase solicitada.

class Entity
{
public:
    virtual void attack() {}
};

class Player : public Entity
{
};

class Enemy : public Entity
{
};
int main()
{
    //Este objeto tiene dos tipos: Player y Entity. COn esto puedo cambiar a Entity.
    Player *player = new Player();
    Entity *enemy = new Enemy();
    Entity *entity = player; //Esto es posible por lo mencionado arriba.
    //No puedo 'volver' al tipo Player porque tengo que convertirlo explicitamente. La razon para hacer eso es
    //    que 'entity' puede facilmente ser del tipo Enemy.
    //Player *e = entity;

    //Para solucionar esto usamos dynamic_cast y decirle que es del tipo Player explicitamente.
    Player *e0 = dynamic_cast<Player *>(entity);

    //Este objeto apunta a null porque 'e1' es del tipo 'Enemy' y estamos tratando de convertirlo a 'Player'
    Player *e1 = dynamic_cast<Player *>(enemy);

    std::cin.get();
    return 0;
}