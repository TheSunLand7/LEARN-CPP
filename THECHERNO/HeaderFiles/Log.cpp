#include "headerFile.h"
#include <iostream>
#include <string>


void answers1(Question q) {
    int options, size;

    q.question = "What is the smallest country?";
    q.answerOption[0] = "1. USA";
    q.answerOption[1] = "2. INDIA";
    q.answerOption[2] = "3. VATICAN CITY";
    q.correct = 3;
    std::cout << q.question << std::endl;

    size = sizeof(q.answerOption) / sizeof(q.answerOption[0]);

    for (int i = 0; i < size; i++) {
        std::cout << q.answerOption[i] << std::endl;
    }

    std::cout << "Choose 1-3: "; std::cin >> options;
    if (options == q.correct) {
        std::cout << "Correct!" << std::endl << std::endl;
    }
    else
        std::cout << "Incorrect!" << std::endl << std::endl;
}

void answers2(Question q) {
    int options, size;

    q.question = "What's the biggest animal in the world?";
    q.answerOption[0] = "1. ELEPHANT";
    q.answerOption[1] = "2. BLUE WHALE";
    q.answerOption[2] = "3. GREAT WHITE SHARK";
    q.correct = 2;
    std::cout << q.question << std::endl;

    size = sizeof(q.answerOption) / sizeof(q.answerOption[0]);

    for (int i = 0; i < size; i++) {
        std::cout << q.answerOption[i] << std::endl;
    }

    std::cout << "Choose 1-3: "; std::cin >> options;
    if (options == q.correct) {
        std::cout << "Correct!" << std::endl << std::endl;
    }
    else
        std::cout << "Incorrect!" << std::endl << std::endl;
}

void answers3(Question q) {
    int options, size;

    q.correct = 1;
    q.answerOption[0] = "1. 118 ELEMENTS";
    q.answerOption[1] = "2. 119 ELEMENTS";
    q.answerOption[2] = "3. 120 ELEMENTS";
    q.question = "How many elements are there in the periodic table?";
    std::cout << q.question << std::endl;

    size = sizeof(q.answerOption) / sizeof(q.answerOption[0]);

    for (int i = 0; i < size; i++) {
        std::cout << q.answerOption[i] << std::endl;
    }

    std::cout << "Choose 1-3: "; std::cin >> options;
    if (options == q.correct) {
        std::cout << "Correct!" << std::endl << std::endl;
    }
    else
        std::cout << "Incorrect!" << std::endl << std::endl;
}
