//
// Created by JaeZero on 2021.07.01 -- Thursday at 23:54:09
//
// --> In this file we discuss about Mutable keyboard.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//MUTABLE: Tiene dos usos, uno es con 'const' y el otro se aplica con 'lambdas'.
//Permite modificar variables que han sido declarados como 'const'.

class Entity {
	private:
		std::string m_Name;
		mutable int m_DebugCount = 0;
	public:
		const std::string& GetName() const { 
			//Para poder modificar esta variable debemos declararla como 'mutable'.
			m_DebugCount++;
			return m_Name;
		}
};

int main() {
	const Entity e;
	e.GetName();

	//Ahora trabajamos con lambda, el segundo uso de mutable.
	int x = 8;
	auto file = [=] () mutable {
		//Para poder modificar el valor de 'x', que lo pasamos por valor, debemos poner 'mutable'.
		x++;
		std::cout << x << std::endl;
	};

	file();  //Imprime 9.
	//Como pasamos el parametro 'por valor', el valor de 'x' no va a cambiar.
	std::cout << x << std::endl;  //Imprime 8.

	std::cin.get(); return 0;
}