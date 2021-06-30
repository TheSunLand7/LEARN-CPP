/*In this file we discuss about destructors*/

#include <iostream>

//DESTRUCTORS: Cada vez que un objeto es destruido, el destructor es llamado.

class Entity {
	public:
  		float X, Y;

  // Podemos crear constructors con o sin parametros.
  	Entity() {
    	X = 0.0f;
    	Y = 0.0f;
		std::cout << "Created Entity" << std::endl;
  	}
	
	//No necesita parametros.
	~Entity() {std::cout << "Destroyed Entity!" << std::endl;}

  	void Print() { std::cout << X << ", " << Y << std::endl; }
};

void Print() {
	Entity e;
	e.Print();
}

int main() {

	Print();

	std::cin.get(); return 0;
}