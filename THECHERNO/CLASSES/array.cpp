/*In this file we discuss all about arrays.*/

#include <iostream>
#include <array>

class Entity {
	public:
		//Este es un ejemple de un array normal (raw array) 
		static const int exampleSIze = 5;
		int example[exampleSIze];

		//Esto es un estandar array.
		std::array<int, 5> another;

		Entity () {
			for (int i = 0; i < another.size(); ++i) {
				example[i] = 2;
			}
		}
		~Entity () {}
};

int main() {
	

	std::cin.get(); return 0;
}