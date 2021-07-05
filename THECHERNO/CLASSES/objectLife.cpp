//
// Created by JaeZero on 2021.07.04 -- Sunday at 22:25:11
//
// --> In this file we discuss about OBJECT LIFETIME.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

// OBJECT LIFETIME: Si creamos un objeto en la memoria 'stack', esta se eliminara cuando
//    quede fuera del scope.

class Entity {
	private:
		int x, y;

	public:
		Entity () { std::cout << "Created Entity" << std::endl;}
		~Entity () { std::cout << "Deleted Entity" << std::endl;}
};

class ScopePtr {
	private:
		Entity* m_Ptr;

	public:
		ScopePtr (Entity* Ptr) 
			: m_Ptr(Ptr) {}
		~ScopePtr () { delete m_Ptr; }
};

int main() {
	//SI creamos un scope vacio y dentro de el, cremaos nuestro objeto.

	{
		//Si hacemos debug, nos damos cuenta que ni bien salimos del scope, todo se elimina.
		//Entity e;
		
		//Sin embargo, podemos 'alargar' la vida de este objeto alocandolo en la memoria 'heap'.
		//Al hacer esto, el tiempo de vida de 'e' será hasta que el programa finalice, si el programa
		//    no finaliza, este objeto no sera eliminado.
		//Para eliminarlo podemos usar el operador 'delete', pero podemos crear una clase para que la
		//    elimine 'automaticamente'.
		//Entity* e = new Entity();
		ScopePtr scope = new Entity();  //Este objeto es eliminado ni bien esta fuera de este scope, a pesar
										//    de estar alocado en la memoria 'heap'. Y eso es porque en la clase
										//    ScopePtr (stack), su destructor utiliza el operador 'delete'.
	}

	std::cin.get(); return 0;
}