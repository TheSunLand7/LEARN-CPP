//This is a class example
#include <iostream>
#include <string>

class Enemy {
    protected:
        int attackPower;
    public:
        //Si usamos pure virtual functions, este debe ser sobreescrito en cada clase que se herede.
        //Si no se utiliza, se puede incluso omitir la funcion en la cualquier clase heredada.
        //virtual void attack() = 0;  //Pure Virtual functions
        virtual void attack() {}
        void setAttackPower(int a) { this->attackPower = a; }
};

class Ninja : public Enemy {
    public:
        void attack() {
           std::cout << "I am a Ninja, ninja chop! -" << attackPower << std::endl;
        }
};

class Monster : public Enemy {
public:
  void attack() {
    std::cout << "Monter must eat you!!!! -" << attackPower << std::endl;
  }
};

int main() {

    /*PRIMERA FORMA SIN VIRTUAL FUNCTION EN LA CLASE BASE
    Ninja n;
    Monster m;

    Enemy* enemy1 = &n;
    Enemy* enemy2 = &m;

    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);

    n.attack();
    m.attack();*/

    Enemy* enemy1 = new Ninja;
    Enemy* enemy2 = new Monster;

    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);

    enemy1->attack();
    enemy2->attack();

    delete enemy1;
    delete enemy2;

    std::cin.get(); return 0;
}
