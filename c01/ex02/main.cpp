#include <iostream>

/* In C++ a variable reference is equivalent to a constant pointer:
 * <type> &stringREF == <type> * const stringPTR
 * It is a pointer that cannot be changed to point to another variable.
 * It is used to alias a variable.
 */

int main( void )
{
    std::string  string    = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string: " << string << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
    return 0;
}
