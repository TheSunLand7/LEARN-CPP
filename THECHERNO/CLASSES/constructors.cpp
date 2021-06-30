/*In this file we discuss about constructors*/
#include <iostream>

//CONSTRUCTORS: Son aquellos que se ejecutan cada vez que creamos un object.
//Los constructors se crean automaticamente, pero en blanco; es decir, no tienen
//    efecto cuando creamos un objeto.

class Entity {
	public:
		float X, Y;

		//Podemos crear constructors con o sin parametros.
		Entity() {
			X = 0.0f;
			Y = 0.0f;
		}

		Entity(float x, float y) {
			X = x;
			Y = y;
		}

		void Print() {
			std::cout << X << ", " << Y << std::endl;
		}
};

class Log {

	/*private:
		Log() {}*/
	public:
		//Si queremos que no se ejecute el constructor al crear un objeto podemos
		//		colocarlo en private o podemos igualarlo a delete.
		Log() = delete;
		static void Write() {}
};

int main() {

	Entity e;
	e.Print();

	Entity e1(5.6f, 6.8f);
	e1.Print();

	std::cin.get(); return 0;
}