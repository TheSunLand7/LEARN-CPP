#include <iostream>
#include <string>

//Comments in es-ES

/*Ejercicio 1: Construya una clase llamada Rectangulo que tenga los siguientes atributos: 
argo y ancho, y los siguientes metodos: perimetro() y area().
class Rectangle {
    private:  //attributes
        int height, width;
    public:  //methods
        Rectangle(int, int);  // constructor
        void perimeter();
        void area();
};

//Constructor initial
Rectangle::Rectangle(int _height, int _width) {
    height = _height;
    width = _width;
}

void Rectangle::perimeter() {  //Metodo perimeter de la clase Rectangle.
    int _perimeter = (2 * width) + (2 * height);
    std::cout << "The perimeter is: " << _perimeter << std::endl;
}
void Rectangle::area() {
    int _area = height * width;
    std::cout << "The area is: " << _area << std::endl;
}

int main() {
    Rectangle r1(11, 7);
    r1.perimeter();
    r1.area();

    std::cin.get();
    return 0;
}*/

/*PRACTICAMOS LO APRENDIDO
class Fecha {
    private:
        int day, month, year;
    public:
        Fecha(int, int, int);  // constructor 1
        Fecha(long);  // constructor 2
        void showDate();
 
};
//Primer constructor
//Ejemplo de fecha: 15 06 2021
Fecha::Fecha(int _day, int _month, int _year) {
    day = _day;
    month = _month;
    year = _year;
}
//Segundo constructor
//Ejemple de fecha: 20210615
Fecha::Fecha(long fechaEntera) {
    year = (int)(fechaEntera / 10000);
    month = (int)((fechaEntera - year * 10000) / 100);
    day = (int)((fechaEntera - year * 10000) - (month * 100));
}
void Fecha::showDate() {
    std::cout << "Today's date is: " << day << "/" << month << "/" << year << std::endl;
}

int main() {
    Fecha f0(15, 6, 2021);
    Fecha f1(20210615);  //El compilador reconoce a cuál constructor llamar!
    f1.showDate();
    f0.showDate();

    std::cin.get(); return 0;
}*/

/*Ejercicio 2: Construya una clase Tiempo que contenga los siguientes atributos enteros: 
horas, minutos y segundos. Haga que la clase contenga 2 constructores, el primero debe tener 
3 parámetros Tiempo(int,int,int) y el segundo sólo tendrá un campo que serán los segundos y 
desensamble el número entero largo 
en horas, minutos y segundos.
class Tiempo {
    private:
        int hrs, min, sec;
    public:
        Tiempo(int, int, int);
        Tiempo(long);
        void showTime();
};

Tiempo::Tiempo(int _hrs, int _min, int _sec){
    hrs = _hrs;
    min = _min;
    sec = _sec;
}

//Ejemplo de segundos ingresados 25687
Tiempo::Tiempo(long totalSec) {
    hrs = (int)(totalSec / 3600);
    totalSec %= 3600;
    min = (int)(totalSec / 60);
    sec = (int)(totalSec % 60);
}

void Tiempo::showTime() {
    std::cout << "The time is: " << hrs << ":" << min << ":" << sec << std::endl;
}

int main() {
    Tiempo t1(15, 58, 36);
    Tiempo t2(53916);

    t1.showTime();
    t2.showTime();

    std::cin.get(); return 0;
}*/

/*DESTRUCTORES

class Perro {
    private:
        std::string name, origin;
    public:
        Perro(std::string, std::string);
        ~Perro();  //Destructor de objetos creados en una clase - declarado.
        void showData();
        void game();
};

Perro::Perro(std::string _name, std::string _origin) {
    name = _name;
    origin = _origin;
}

Perro::~Perro(){}  //Destructor iniciado.

void Perro::showData() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Origin: " << origin << std::endl;
}

void Perro::game() {
    std::cout << name << " is playing with me!" << std::endl;
}

int main() {
    Perro firulais("Buddy", "Rottweiler");
    firulais.showData();
    firulais.game();
    //firulais.~Perro();  //Destruye el objeto. Aunque no es necesario colocarlo aquí.

    std::cin.get(); return 0;
}*/

