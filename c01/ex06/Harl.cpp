#include "Harl.hpp"
#include <cstdlib>
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

std::string _randomMessage( void )
{
    std::string messages[] = { "I'm a lumberjack and I'm okay",
        "I sleep all night and I work all day",
        "He's a lumberjack and he's okay",
        "He sleeps all night and he works all day",
        "She's a lumberjack and she's okay",
        "She sleeps all night and she works all day",
        "We're lumberjacks and we're okay",
        "We sleep all night and we work all day",
        "You're a lumberjack and you're okay",
        "You sleep all night and you work all day" };

    return messages[rand() % 10];
}

void Harl::_dispatch( std::string level )
{
    void ( Harl::*handle[4] )( void )
        = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };
    std::string loggingLevels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for ( int i = 0; i < 4; i++ ) {
        if ( level == loggingLevels[i] ) {
            ( this->*handle[i] )();
            std::cout << _randomMessage() << "\033[0m" << std::endl;
            return;
        }
    }
}

int Harl::_translate( std::string level )
{
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for ( int i = 0; i < 4; i++ ) {
        if ( levels[i] == level )
            return i - 1;
    }
    return 4;
}

void Harl::_filter( int level )
{
    while ( ++level < 4 ) {
        switch ( level ) {
        case 0:
            this->_dispatch( "DEBUG" );
            break;
        case 1:
            this->_dispatch( "INFO" );
            break;
        case 2:
            this->_dispatch( "WARNING" );
            break;
        case 3:
            this->_dispatch( "ERROR" );
            break;
        default:
            this->_dispatch( "NONE" );
            break;
        }
    }
}

void Harl::complain( std::string level )
{
    int levelCase = this->_translate( level );
    this->_filter( levelCase );
}

void Harl::_debug( void ) { std::cout << "\033[0;30mDEBUG: "; }

void Harl::_info( void ) { std::cout << "\033[0;32mINFO: "; }

void Harl::_warning( void ) { std::cout << "\033[1;33mWARNING: "; }

void Harl::_error( void ) { std::cout << "\033[1;31mERROR: "; }

void Harl::_none( void ) {}
