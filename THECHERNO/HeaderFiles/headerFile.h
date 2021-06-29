#pragma once  //Te previene para que no utilices este header mas de una vez en un archivo cpp.
#include <string>
struct Question {
    std::string question;
    std::string answerOption[3];
    int correct = 0;
};

void answers1(Question q);
void answers2(Question q);
void answers3(Question q);
