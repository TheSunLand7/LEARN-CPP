#include <iostream>
#include <fstream>
#include <string>

void archivos();
void lectura();
void agregar();

int main() {
    //archivos();
    agregar();
    lectura();

    std::cin.get();
    return 0;
}

void archivos() {
    std::ofstream my_file;
    std::string file_name, phrase_;

    std::cout << "Please enter the file's name (*.txt): "; std::getline(std::cin, file_name);

    my_file.open(file_name.c_str(), std::ios::out);

    if (!my_file) {
        std::cout << "File not created! Try again!" << std::endl;
        return;
    } else {
        while (true) {
            std::cout << "Enter whatever you want (type quit to exit): "; std::getline(std::cin, phrase_);
            if (phrase_ == "quit") {
                break;
            }
            my_file << phrase_ << std::endl;
        }
        my_file.close();
    }
}

void lectura() {
    std::ifstream my_file;
    std::string file_name, read_file;


    std::cout << "Please enter the file's name to read: "; std::getline(std::cin, file_name);
    my_file.open(file_name.c_str(), std::ios::in);
    if (!my_file) {
        std::cout << "File not created! Try again!" << std::endl;
        return;
    } else {
        while (!my_file.eof()) {
            //my_file >> read_file;  //Se copia sin espacios. No se como arreglarlo.
            std::getline(my_file, read_file);
            std::cout << read_file;
        }
        my_file.close();
    }
}

void agregar() {
    std::ofstream my_file;
    std::string file_name, app_phrase;

    std::cout << "Please enter the file name to modify: "; std::getline(std::cin, file_name);
    my_file.open(file_name.c_str(), std::ios::app);

    if (!my_file) {
        std::cout << "File not created! Try again!" << std::endl;
        return;
    } else {
        while (true) {
            std::cout << "Please enter text you want (type quit to exit): "; std::getline(std::cin, app_phrase);
            if (app_phrase == "quit")
                break;
            my_file << app_phrase << std::endl;
        }
        my_file.close();
    }
}