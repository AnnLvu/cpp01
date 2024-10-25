#include <iostream>
#include <string>

int main() {
    // A string variable initialized
    std::string brain = "HI THIS IS BRAIN";

    // A pointer to the string.
    std::string *stringPTR = &brain;

    //  A reference to the string.
    std::string &stringREF = brain;

    // The memory address of the string variable.
    std::cout << "Memory address of the string variable: " << &brain << std::endl;
    // The memory address held by stringPTR.
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    // The memory address held by stringREF.
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // The value of the string variable.
    std::cout << "Value of the string variable: " << brain << std::endl;
    // The value pointed to by stringPTR.
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    // The value pointed to by stringREF.
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
