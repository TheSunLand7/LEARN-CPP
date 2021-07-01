/*IN this file we discuss about pure virtual functions.*/
#include <iostream>

//PURE VIRTUAL FUNCTIONS: Son un tipo especifico de los virtual functions.
//Los virtual functions nos permiten definir un metodo sin implementar en la clase base
//    fuerza a las subclases a implementar ese metodo.
//Esta creacion de metodos sin implementar (templates) y forzar a las subclases a implementarlo, es conocido
//    como 'interfaces'.
//Como este metodo no tiene implementacion, no se puede instanciar la clase.
class Entity {
	public:
		//Esto es un pure virtual function
		virtual std::string GetName() = 0;
		
};

class Player : public Entity {
	private:
		std::string m_Name;

	public:
		Player (const std::string& name) 
			: m_Name(name) {}
		//EL override permite aclarar explicitamente que este metodo es sobreescrito.
		std::string GetName () override { return m_Name;}
		
		~Player () {}
};

void Printfunction (Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}

int main() {
	//Como se menciono antes, con un pure virtual function en la clase, no se puede instanciar.
	//Solo se puede instanciar a las subclases que implementen el pure virtual functions.
	Entity* e = new Player("Firulais");
	Printfunction(e);
	

	std::cin.get(); return 0;
}