#include <iostream>
#include <cstdlib>
#include <iomanip> //This library has a function called setw().

int main(void) {
    /*DRAWING A TRIANGLE.*/
    int height;
    char symbol;
    std::cout << "Please enter height: "; std::cin >> height;
    std::cout << "Please enter the symbol: "; std::cin >> symbol;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << std::setw(3) << symbol;
        }
        std::cout << std::endl;
        
    }


    /*DRAWING SYMBOLS.
    int height, width;
    char symbol;
    std::cout << "Please enter height: "; std::cin >> height;
    std::cout << "Please enter width: "; std::cin >> width;
    std::cout << "Please enter the symbol: "; std::cin >> symbol;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //The setw() function add spaces of a certain number of fields to the character that
            // the user has entered. See how it works in the example below.
            std::cout << std::setw(3) << symbol;
        }
        std::cout << std::endl;
        
    }
    */

    /*Multiplication Table
    int count = 10;
    for (int i = 1; i <= count; i++)
    {
        for (int k = 1; k <= count; k++)
        {
            std::cout << i << " x " << k << " = " << i * k << std::endl;
        }
        std::cout << std::endl;
    }
    */


    /*AVERAGE OF GRADES.
    int grade, sum = 0, i = 0;

    while (i < 3) {
        do
        {
            std::cout << "Please enter the grade " << i+1 << ": "; std::cin >> grade;
        } while ((grade < 1) || (grade > 20));
        i++;
        sum += grade;
    }
    
    std::cout << "\nThe sum is: " << sum << std::endl;
    std::cout << "The average is: " << float(sum) / 3 << std::endl;
    */

    /*Factorial of a number.
    int number, factorial = 1, count = 1;
    std::cout << "Please enter a number: "; std::cin >> number;
    if (number > 0)
    {
        do
        {
            factorial *= count;
            count++;
        } while (count <= number);
        std::cout << "The Factorial of " << number << "! is: " << factorial << std::endl;
    } else if (number == 0) {
        std::cout << "The factorial of zero is: 1" << std::endl;
    } else if (number < 0) {
        std::cout << "Factorial of negative numbers do not exist!!!" << std::endl;
    }
    */
    std::cout << "\n\n----------------------------------------------------------------" << std::endl;
    system("pause");
    return 0;
}