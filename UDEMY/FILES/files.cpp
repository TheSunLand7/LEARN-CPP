
#include <iostream>
#include <string>
#include <fstream>


std::string ROT13(std::string);

int main() {
    std::string text, s, file_path;
    std::cout << "Enter a text (--- in newline to finish): " << std::endl;

    //Mientras se siga almacenando en s. Es para que no repita "Enter a text ..." en cada loop.
    while (std::getline(std::cin, s)) {
        if (s != "---")
            text += s + '\n';
        else break;
    }

    std::cout << "Enter file's path: "; std::getline(std::cin, file_path);
    std::ofstream my_file(file_path);
    //std::ofstream my_file;
    //my_file.open(file_path.c_str(), std::ios::out);
    if (!my_file) {
        std::cout << "Error: Cannot write to " << file_path << std::endl;
    }
    my_file << ROT13(text);
    my_file.close();

    std::cin.get(); return 0;
}

// Algoritmo basico de encriptacion conocido como ROT13 (Rotacion 13).
std::string ROT13(std::string s) {
    for (char &c : s) {  //Se coloca como referencia para que vaya cambiando.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c < 'a' + 13 || c < 'A' + 13) {
                c += 13;
            } else {
                c -= 13;
            }
        }
    }
    return s;
}