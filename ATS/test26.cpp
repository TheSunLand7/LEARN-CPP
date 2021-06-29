#include <cstdlib>
#include <iostream>
#include <string>


/*COLAS / QUEUE
INSERT AND DELETE DAT
struct Nodo {
    int data;
    Nodo *next;
};

void insertData(Nodo *&, Nodo *&, int);
bool queue_empty(Nodo *);
void removeData(Nodo *&, Nodo *&, int&);

int main() {
    Nodo *front = nullptr;
    Nodo *back = nullptr;
    int data = 0;

    std::cout << "Please enter a number: "; std::cin >> data;
    insertData(front, back, data);
    std::cout << "Please enter a number: "; std::cin >> data;
    insertData(front, back, data);
    std::cout << "Please enter a number: "; std::cin >> data;
    insertData(front, back, data);

    std::cout << "\nDeleting data: \n";
    while (front != nullptr) {
        removeData(front, back, data);
        if (front != nullptr) {
            std::cout << data << ", ";
        } else
            std::cout << data << "." << std::endl;
    }

    std::cin.get();
    return 0;
}

void insertData(Nodo *&front, Nodo *&back, int number) {
    Nodo *newNode = new Nodo();
    
    newNode->data = number;
    newNode->next = nullptr;

    if (queue_empty(front))
        front = newNode;
    else
        back->next = newNode;
    back = newNode;

    std::cout << "Number " << number << " entered\n";
}

bool queue_empty(Nodo *front) {
    return (front == nullptr) ? true : false;
}

void removeData(Nodo *&front, Nodo *&back, int &number) {
    number = front->data;
    Nodo *aux = front;

    if (front == back) {
        front = nullptr;
        back = nullptr;
    } else
        front = front->next;

    delete aux;
}*/

/*EJERCICIO DE COLAS / QUEUE 1
Ejercicio 1: Hacer un programa en C++, utilizando Colas que contenga el siguiente menú: 

 1. Insertar un caracter a una cola
 2. Mostrar todos los elementos de la cola
 3. Salir

struct Nodo {
    char data;
    Nodo *next;
};

void insertData(Nodo *&, Nodo *&, char);
void removeData(Nodo *&, Nodo *&, char&);
void showData(Nodo *&front, Nodo *&back, char &letter, int option);
int showMenu();

int main() {
    Nodo *front = nullptr;
    Nodo *back = nullptr;
    char answer, letter;

    do {
        int option = showMenu();

        if (option == 3) {
            break;
        } else
            showData(front, back, letter, option);
        std::cout << "\nWould you like to do something else? (y/n): "; std::cin >> answer;
    } while ((answer == 'y') || (answer == 'Y'));

    std::cin.get();
    return 0;
}

void insertData(Nodo *&front, Nodo *&back, char letter) {
    Nodo *newNode = new Nodo();
    newNode->data = letter;
    newNode->next = nullptr;

    if (front == nullptr) {
        front = newNode;
    } else
        back->next = newNode; // Apunta al nuevo nodo que se ha creado.
    back = newNode;
}

void removeData(Nodo *&front, Nodo *&back, char &letter) {
    letter = front->data;
    Nodo *aux = front;

    if (front == back) {
        front = nullptr;
        back = nullptr;
    } else
        front = front->next;

    delete aux;
}

int showMenu() {
    int choice = 0;

    std::cout << "x----------MENU----------x\n"
              << "1. Insert a character.\n"
              << "2. Show all characters.\n"
              << "3. Exit.\n"
              << "Choose (1-3): "; std::cin >> choice;
    return choice;
}

void showData(Nodo *&front, Nodo *&back, char &letter, int option) {
    
    bool run = true;
    switch (option) {
        case 1: 
            
            do {
                std::cout << "\nEnter a character [Press 'q' to exit]: "; std::cin >> letter;
                if (letter == 'q') {
                    break;
                } else {
                    insertData(front, back, letter);
                    std::cout << "letter '" << letter << "' entered.\n";
                }
            } while (run);
            
            break;
        case 2:
            std::cout << "\nShowing letters entered by user: \n";
            while (front != nullptr) {
                removeData(front, back, letter);
                if (front != nullptr)
                    std::cout << letter << ", ";
                else
                    std::cout << letter << "." << std::endl;
            }

            break;
        case 3: break;

    }
}*/

/*EJERCICIO DE COLAS 2
Ejercicio 2: Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, 
y por ultimo muestre los clientes en el orden correcto.
#include <string>

struct Nodo {
    std::string name;
    int age;
    float balance;
    Nodo *next;
};

void insertData(Nodo *&, Nodo *&, std::string, int, float);
void removeData(Nodo *&, Nodo *&, std::string&, int&, float&);
int showMenu();
void showData(Nodo *&, Nodo *&, std::string&, int&, float&, int);

int main() {

    Nodo *front = nullptr;
    Nodo *back = nullptr;
    char answer;
    std::string name;
    int age;
    float balance;


    do {
        int option = showMenu();
        if (option == 3)
            break;
        else
            showData(front, back, name, age, balance, option);
        std::cout << "\nWould you like to do something else? (y/n): "; std::cin >> answer;
        
    } while ((answer == 'y') || (answer == 'Y'));


    std::cin.get();
    return 0;
}

void insertData(Nodo *&front, Nodo *&back, std::string name, int age, float balance) {
    Nodo *newNode = new Nodo();
    newNode->name = name;
    newNode->age = age;
    newNode->balance = balance;
    newNode->next = nullptr;

    if (front == nullptr) {
        front = newNode;
    } else
        back->next = newNode;
    back = newNode;

}

void removeData(Nodo *&front, Nodo *&back, std::string &name, int &age, float &balance) {
    name = front->name;
    age = front->age;
    balance = front->balance;

    Nodo *aux = front;

    if (front == back) {
        front = nullptr;
        back = nullptr;
    }else {
        front = front->next;
    }

    delete aux;
}

int showMenu() {
    int choice = 0;

    std::cout << "\n\tx--MENU--x\n"
              << "1. Insert client's data.\n"
              << "2. Show client's data.\n"
              << "3. Exit.\n"
              << "Choose (1-3): "; std::cin >> choice;
    return choice;
}

void showData(Nodo *&front, Nodo *&back, std::string &name, int &age, float &balance, int option) {
    //bool run = true;
    int numberClients = 0, count = 0;

    switch (option) {
        case 1:
            std::cout << "\nHow many clients will you add?: "; std::cin >> numberClients;
            do {

                std::cout << "Please enter " << count + 1 << ". client's name: "; std::cin >> name;
                std::cout << "Please enter " << count + 1 << ". client's age: "; std::cin >> age;
                std::cout << "Please enter " << count + 1 << ". client's balance: "; std::cin >> balance;
                std::cout << "x------------------------------------------------x\n";
                insertData(front, back, name, age, balance);
                ++count;
            } while (count < numberClients);

            break;

        case 2:
            std::cout << "\nShowing clients' data:\n";
            while (front != nullptr) {
                removeData(front, back, name, age, balance);
                if (front != nullptr) {
                    std::cout << "Name: " << name << std::endl;
                    std::cout << "Age: " << age << std::endl;
                    std::cout << "Balance: " << balance << std::endl;
                    std::cout << "x------------------------------------x\n";
                    
                } else {
                    std::cout << "Name: " << name << std::endl;
                    std::cout << "Age: " << age << std::endl;
                    std::cout << "Balance: " << balance << std::endl;
                    std::cout << "x--------------FIN----------------------x\n";
                }
            }
            break;
        
        case 3:
            break;
    }
}*/