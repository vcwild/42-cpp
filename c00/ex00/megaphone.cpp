#include <cstring>
#include <iostream>

class Megaphone {
private:
    int    _argc;
    char **_argv;

public:
    Megaphone( int argc, char **argv ) : _argc( argc ), _argv( argv )
    {
        this->dispatch();
    };

    ~Megaphone( void ) {};

    void resolve( void ) const
    {
        size_t len  = 0;
        int    rows = this->_argc - 1;
        for ( int outer = 1; outer <= rows; outer++ ) {
            len = strlen( this->_argv[outer] );

            for ( int inner = 0; inner < len; inner++ )
                this->_argv[outer][inner]
                    = toupper( this->_argv[outer][inner] );
            std::cout << this->_argv[outer];
        }
        std::cout << std::endl;
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

int main( int argc, char **argv ) { Megaphone megaphone( argc, argv ); }
