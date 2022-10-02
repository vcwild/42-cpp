#include <cstring>
#include <iostream>

class Megaphone {
private:
    int          _argc;
    char const** _argv;

public:
    Megaphone( int argc, char const** argv ) : _argc( argc ), _argv( argv )
    {
        this->dispatch();
    };

    ~Megaphone( void ) {};

    void resolve( void ) const
    {
        int rows = this->_argc - 1;

        for ( int outer = 0; outer < rows; outer++ ) {
            size_t len = strlen( this->_argv[outer + 1] );
            for ( int inner = 0; inner < len; inner++ )
                putchar( std::toupper( this->_argv[outer + 1][inner] ) );
        }
        putchar( '\n' );
    }

    void dispatch( void ) const
    {
        if ( this->_argc == 1 ) {
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
            return;
        }
        this->resolve();
    }
};

int main( int argc, char const** argv ) { Megaphone megaphone( argc, argv ); }
