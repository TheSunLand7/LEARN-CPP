#include <iostream>
//#include <string>
#include <fstream>

int getWhatTheyWant();
void displayItems(int);


//Main function
int main() {

    int whatTheyWant;
    //whatTheyWant = getWhatTheyWant();

    do {
        whatTheyWant = getWhatTheyWant();
        switch (whatTheyWant) {
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }
        
    } while (whatTheyWant != 4);

    std::cin.get(); return 0;
}

//get what they want function
int getWhatTheyWant() {

    int choice;
    std::cout << "1 - just plain items\n"
                 "2 - helpful items\n"
                 "3 - harmful items\n"
                 "4 - quit program\n"
                 "Choose(1 - 4): "; std::cin >> choice;
    
    return choice;
}

void displayItems(int num) {
    std::ifstream objectFile("objects.txt", std::ios::in);
    std::string name;
    int power;

    if (num == 1) {
        while (objectFile >> name >> power) {
            if (power == 0) {
                std::cout << name << " " << power << std::endl;
            }
        }
    } else if (num == 2) {

        while (objectFile >> name >> power) {
            if (power > 0) {
            std::cout << name << " " << power << std::endl;
            }
        }
    } else if (num == 3) {
        while (objectFile >> name >> power) {
            if (power < 0) {
            std::cout << name << " " << power << std::endl;
            }
        }
    }
}