#include <iostream>
#include <string>

/*
class Person {
    private:
        std::string name;
        int age;
    public:
        Person(std::string, int);
        virtual void show();
};

class Alumni : public Person {
    private:
        float final_grade;
    public:
        Alumni(std::string, int, float);
        void show();
};

class Professor : public Person {
    private:
        float salary;
    public:
        Professor(std::string, int, float);
        void show();
};

Person::Person(std::string _name, int _age) {
    name = _name;
    age = _age;
}

void Person::show() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

Alumni::Alumni(std::string _name, int _age, float _final_grade) : Person(_name, _age) {
    final_grade = _final_grade;
}

void Alumni::show() {
    Person::show();  //Person: Para que sepa donde ir a buscar el metodo show().
    std::cout << "Final Grade: " << final_grade << std::endl;
}

Professor::Professor(std::string _name, int _age, float _salary) : Person(_name, _age) {
    salary = _salary;
}

void Professor::show() {
    Person::show();
    std::cout << "Salary: " << salary << std::endl;

}

int main() {

    //En polimorfismo se suele trabajar con punteros.
    Person* alumn1 = new Alumni("Mishelle", 25, 19.3);
    std::cout << "-ALUMNO-" << std::endl;
    alumn1->show();
    std::cout << '\n';

    Person* prof1 = new Professor("Elon", 49, 93258.36);
    std::cout << "-PROFESSOR-" << std::endl;
    prof1->show();

    delete alumn1;
    delete prof1;
    std::cin.get(); return 0;
}*/

/**/

class Animal {
    private:
        std::string name;
        float weight;
    public:
        Animal(std::string, float);
        virtual void eat();
};

class Human : public Animal {
    private:
        int age;
    public:
        Human(std::string, float, int);
        void eat();
};

class Dog : public Animal {
    private:
        std::string origin;
    public:
        Dog(std::string, float, std::string);
        void eat();
};

Animal::Animal(std::string _name, float _weight) {
    name = _name;
    weight = _weight;
}

void Animal::eat() {
    std::cout << name << " come ";
}

Human::Human(std::string _name, float _weight, int _age) : Animal(_name, _weight) {
    age = _age;
}

void Human::eat() {
    Animal::eat();
    std::cout << "sentado, en una silla mirando la tele!" << std::endl;
}

Dog::Dog(std::string _name, float _weight, std::string _origin) : Animal(_name, _weight) {
    origin = _origin;
}

void Dog::eat() {
    Animal::eat();
    std::cout << "en el piso, junto a su dueño!" << std::endl;
}

int main() {

    Animal* human1 = new Human("Elon", 78, 49);
    std::cout << "-HUMAN-" << std::endl;
    human1->eat();
    std::cout << '\n';

    Animal* dog1 = new Dog("Firulais", 34, "Labrador");
    std::cout << "-DOG-" << std::endl;
    dog1->eat();

    std::cin.get(); return 0;
}