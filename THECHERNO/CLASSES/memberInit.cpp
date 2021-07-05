//
// Created by JaeZero on 2021.07.02 -- Friday at 20:43:25
//
// --> In this file we discuss about Members Initializer (Constructor Initializer).	
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//MEMBERS INITIAÑIZERS: Se debe siempre inicializar los miembros de la clase en los constructores,
//    porque hacen que el codigo sea facil de leer y entender, ademas, permite evitar perdida de performance
//    cuando creamos objetos dentro de una clase (ver video 'The Cherno' para entender).

class Entity {
	private:
		std::string m_Name;
		int m_Score;
	public:
		//Para inicializar las varibales, se deben colocar en el mismo orden en las que son declaradas.
		Entity () : m_Name("JaeZee"), m_Score(100) {}
		Entity (const std::string& name) {
			m_Name = name;
		}

		const std::string& GetName() const { return m_Name; }
};

int main() {
	Entity e0("John");
	std::cout << e0.GetName() << std::endl;

	Entity e1;
	std::cout << e1.GetName() << std::endl;

	std::cin.get(); return 0;
}