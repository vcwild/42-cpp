#include "whatever.hpp"

int main()
{
    std::cout << "max(2,4) = " << max<int>( 2, 4 ) << std::endl;
    std::cout << "max(2,2) = " << max<int>( 2, 2 ) << std::endl;
    std::cout << "max(4,2) = " << max<int>( 4, 2 ) << std::endl;
    std::cout << "max(python,javascript) = "
              << max<std::string>( "python", "javascript" ) << std::endl;

    std::cout << std::endl;

    std::cout << "min(2,4) = " << min<int>( 2, 4 ) << std::endl;
    std::cout << "min(2,2) = " << min<int>( 2, 2 ) << std::endl;
    std::cout << "min(4,2) = " << min<int>( 4, 2 ) << std::endl;
    std::cout << "min(python,js) = " << min<std::string>( "python", "js" )
              << std::endl;

    {
        std::string s1 = "python";
        std::string s2 = "js";

        std::cout << "pre s1: " << s1 << std::endl;
        std::cout << "pre s2: " << s2 << std::endl << std::endl;

        _swap<std::string>( s1, s2 );

        std::cout << "pos s1: " << s1 << std::endl;
        std::cout << "pos s2: " << s2 << std::endl << std::endl;
    }

    {
        int s1 = 2;
        int s2 = 22;

        std::cout << "pre s1: " << s1 << std::endl;
        std::cout << "pre s2: " << s2 << std::endl << std::endl;

        _swap<int>( s1, s2 );

        std::cout << "pos s1: " << s1 << std::endl;
        std::cout << "pos s2: " << s2 << std::endl << std::endl;
    }
}
