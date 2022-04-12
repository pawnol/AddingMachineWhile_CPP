/*
Adding Machine While
Pawelski
4/12/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    int num1, num2;
    std::string repeat = "Y";
    while (repeat == "Y")
    {
        std::cout << "Enter a number >> ";
        std::cin >> num1;
        std::cout << "Enter another number >> ";
        std::cin >> num2;
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
        std::cout << "Would you like to enter another set of numbers? (Y/N) >> ";
        std::cin >> repeat;
        std::cout << "\n";
    }
    return 0;
}
