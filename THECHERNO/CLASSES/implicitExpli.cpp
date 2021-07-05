//
// Created by JaeZero on 2021.07.03 -- Saturday at 00:17:28
//
// --> In this file we discuss about Impplicit Conversion and explicit Keyboard..
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <string>
//IMPLICIT CONVERSION: Siginifica que el compilador convertira de manera automatica, los datos
//    de ser necesarios para el desarrollo del programa; es decir, si usamos un tipo de dato como
//    si fuera otro y la conversion entre ambos existe, c++ convertira el dato adecuadamente a las
//    necesidas del programa.

//ECPLICIT KEYBOARD: Desabilita esta funcion de conversion implicita. Se coloca al inicio del constructor.
//Esto quiere decir que no hay conversion implicita. Debe ser explicitamente llamado como normalmente lo hicimos.
//en este caso: Entity b(22); 

class Entity {
	private:
		std::string m_Name;
		int m_Age;
	public:
		Entity (const std::string& name)
			: m_Name(name), m_Age(-1) {}
		
		explicit Entity (int age) 
			: m_Name("Unknown"), m_Age(age) {}
};

//Lo mismo sucede si trabajamos con funciones:
void PrintEntity (const Entity& entity) {
	/* --Do something-- */
}

int main() {
	
	//Lo que esta pasando aqui, es que c++ esta convirtiendo implicitamente un 'string' a
	//    'Entity', porque hay un constructor con parametro 'string'.
	Entity a = std::string("Spot");
	
	//Lo mismo sucede aqui, esta convirtiendo implicitamente un 'int' a un 'Entity'.
	//Entity b = 22;

	//en estos dos ejemplos sucede lo mismo.
	//PrintEntity(22);
	//PrintEntity(std::string("Arlo"));

	//Como usamos en keyboard 'explicit' para el segundo constructor, debemos llamarlo como tal.
	Entity b(22);

	std::cin.get(); return 0;
}