/*in this case we discuss about virtual functions*/

#include <iostream>

// VIRTUAL FUNCTIONS: Nos permite sobreescribir metodos en las subclases. Es to es obligatorio.

class Entity {
	public:
		virtual std::string GetName() { return "Entity";}
		
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

	//Cuando imprimimos ambos objetos, dan como resultado el mismo valor 'Entity'.
	//Esto se debe a que cuando llamamos a la funcion 'Printfunction', este toma
	//    como referencia el tipo del objeto creado. En este caso la funcion toma de referencia
	//    el tipo 'Entity', por eso llama al metodo dentro de esa clase.
	//Si queremos se sobreescriba la funcion para el tipo 'Player' se debe hacer que el
	//    metodo de la clase base sea virtual.
	Entity* e = new Entity;
	Printfunction(e);

	Player* p = new Player("Arlo");
	Printfunction(p);

  	std::cin.get(); return 0;
}

//!Investigar un poco mas lo descrito below!
//El usar virtual function requiere mas memoria; sin embargo, el impacto en el funcionamiento o
//    performance del programa va a ser minimo. 