/*In this case we discuss about inheritance.*/

#include <iostream>

//INHERITANCE: Nos permite tener jerarquia de clases que estan relacionados unos con otros.
//En otras palabras, nos permite teners una clase base que tiene ciertas funcionalidades y de
//    allí tener subclases que comparten algunos o todas las funcionalidades de la clase base.
//Con esto se evida duplicacion de codigo al igual que lo hace una funcion.

class Entity {
	public:
		float X, Y;
		void Move(float xa, float ya) {
			X += xa;
			Y += ya;
		}
};

//La clase Player no solo tiene el tipo 'Player' sino tambien el tipo 'Entity'. Esto significa
//    que la clase 'Player' tiene todo lo que tiene 'Entity'.
class Player : public Entity {
	public:
		const char* Name;

		void PrintName() {
			std::cout << Name << std::endl;
		}
};

int main() {
	std::cout << sizeof(char) << std::endl;

	std::cin.get(); return 0;
}