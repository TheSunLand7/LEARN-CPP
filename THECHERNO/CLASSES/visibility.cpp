/*In this file we discuss about visibility.*/

#include <iostream>

//VISIBILITY: Se refiere a cuan visible un atributo, metodo es en una clase.
//Es decir, quien puede ver o llamarlos.
//La visibilidad no tiene ningun efecto en como tu programa se ejecuta o se desearrolla.
//Es algo que solamente existe en el lenguaje para que podamos escribir mejores codigos o 
//    para ayudarnos a organizar mejor nuestro codigo.
//En C++ exinten 3 modificadores de visibilidad: 'protected', 'public' y 'private'.
//PRIVATE: Solo la clase que lo creo puede acceder a ella, las subclases no pueden accder.
//PROTECTED: Es mas visible que 'private', pero menos visible que 'public'. Esto siginifica
//    que las subclases pueden acceder a ella. Sin embargo, una clase no derivada de la clase base
//    no puede acceder a ella.
//PUBLIC:


class Entity {
	protected:
		int X, Y;
		void Print () {}

	public:
		Entity () {
			X = 0;
			Print();
		}
		~Entity () {}
};

class Player : public Entity {
	private:
		/*data_type v_name*/;

	public:
		Player () {
			X = 2;
			Print();
		}
		~Player () {}
};

int main() {

	//Protected no nos permite acceder a los atributos o metodos fuera de la clase base y las subclases.
	/*Entity e;
	e.Print();

	Player e1;
	e1.Print();*/

	std::cin.get(); return 0;
}