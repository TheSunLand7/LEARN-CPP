#include <iostream>
#include "headerFile.h"


int main() {
    Question q1, q2, q3;

    /*We can make a for loop like this:
    int i = 0;
    bool condition = true;
    for ( ; condition ; )
    {
        std::cout << "Hi, my world!" << std::endl;
        if (!(i < 5))
        {
            condition = false;
        }
        ++i;
    }
    */

    answers1(q1);
    answers2(q2);
    answers3(q3);

    std::cin.get();
    return 0;
}

