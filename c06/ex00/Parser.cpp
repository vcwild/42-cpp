#include "Parser.hpp"
#include <cstdlib>
#include <cstring>
#include <limits>
#include <string>

unsigned long Parser::_toConvert[]
    = { CONVERT_CHAR, CONVERT_DOUBLE, CONVERT_INT, CONVERT_FLOAT };

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Parser::Parser( std::string const &arg ) : _arg( arg ) {}

Parser::Parser( Parser const &src ) : _arg( src._arg ) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Parser::~Parser() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

bool Parser::isChar( std::string const &str )
{
    if ( str.length() == 1 && !std::isdigit( str[0] ) ) {
        return true;
    }
    return false;
}

bool Parser::isInt( std::string const &str )
{
    for ( size_t i = 0; i < str.length(); i++ ) {
        if ( str[i] == '-' && i == 0 ) {
            continue;
        }
        if ( !std::isdigit( str[i] ) ) {
            return false;
        }
    }
    return true;
}

bool Parser::isDouble( std::string const &str )
{
    if ( str.find( '.' ) == std::string::npos ) {
        return false;
    }
    for ( size_t i = 0; i < str.length(); i++ ) {
        if ( str[i] == '-' && i == 0 ) {
            continue;
        }
        if ( !std::isdigit( str[i] ) && str[i] != '.' ) {
            return false;
        }
    }
    return true;
}

bool Parser::isFloat( std::string const &str )
{
    if ( str.find( 'f' ) == std::string::npos ) {
        return false;
    }

    for ( size_t i = 0; i < str.length(); i++ ) {
        if ( str[i] == '-' && i == 0 ) {
            continue;
        }
        if ( !std::isdigit( str[i] ) && str[i] != '.' && str[i] != 'f' ) {
            return false;
        }
    }
    return true;
}

void Parser::castChar( char const *str )
{
    this->_charRepr   = str[0];
    this->_intRepr    = static_cast<long int>( this->_charRepr );
    this->_floatRepr  = static_cast<float>( this->_charRepr );
    this->_doubleRepr = static_cast<double>( this->_charRepr );
}

void Parser::castInt( char const *str )
{
    this->_intRepr = std::atol( str );
    if ( this->_intRepr > std::numeric_limits<int>::max()
        || this->_intRepr < std::numeric_limits<int>::min() ) {
        throw Parser::OverflowException();
    }
    this->_charRepr   = static_cast<char>( this->_intRepr );
    this->_floatRepr  = static_cast<float>( this->_intRepr );
    this->_doubleRepr = static_cast<double>( this->_intRepr );
}

void Parser::castDouble( char const *str )
{
    this->_doubleRepr = std::strtod( str, NULL );
    this->_charRepr   = static_cast<char>( this->_doubleRepr );
    this->_intRepr    = static_cast<long int>( this->_doubleRepr );
    this->_floatRepr  = static_cast<float>( this->_doubleRepr );
}

void Parser::castFloat( char const *str )
{
    this->_floatRepr  = std::atof( str );
    this->_charRepr   = static_cast<char>( this->_floatRepr );
    this->_intRepr    = static_cast<long int>( this->_floatRepr );
    this->_doubleRepr = static_cast<double>( this->_floatRepr );
}

void Parser::_dispatch( char const *str, unsigned long flag )
{
    void ( Parser::*handle[4] )( char const * ) = { &Parser::castChar,
        &Parser::castDouble,
        &Parser::castInt,
        &Parser::castFloat };

    for ( int i = 0; i < 4; i++ ) {
        if ( flag == Parser::_toConvert[i] ) {
            ( this->*handle[i] )( str );
            return;
        }
    }
}

void Parser::_command()
{
    const std::string arg = this->getArg();

    if ( arg == "nan" || arg == "nanf" || arg == "inf" || arg == "inff"
        || arg == "-inf" || arg == "+inf" || arg == "-inff"
        || arg == "+inff" ) {
        this->_literal = true;
        return;
    }

    bool ( Parser::*isOfType[4] )( std::string const &str ) = {
        &Parser::isChar, &Parser::isDouble, &Parser::isInt, &Parser::isFloat
    };

    for ( int i = 0; i < 4; i++ ) {
        if ( ( this->*isOfType[i] )( this->_arg ) ) {
            this->_dispatch( this->_arg.c_str(), Parser::_toConvert[i] );
            return;
        }
    }
    throw Parser::InvalidConversionException();
}

inline bool ends_with( std::string const &value, std::string const &ending )
{
    if ( ending.size() > value.size() )
        return false;
    return std::equal( ending.rbegin(), ending.rend(), value.rbegin() );
}

int Parser::_handleLiteralDisplay() const
{
    if ( this->getLiteral() ) {
        std::cout << "char:\timpossible" << std::endl;
        std::cout << "int:\timpossible" << std::endl;
        if ( ends_with( this->getArg(), "ff" ) ) {
            std::cout << "float:\t" << this->getArg() << std::endl;
            std::cout << "double:\t"
                      << this->getArg().substr( 0, this->getArg().size() - 1 )
                      << std::endl;
        } else if ( this->getArg() == "nanf" ) {
            std::cout << "float:\tnanf" << std::endl;
            std::cout << "double:\tnan" << std::endl;

        } else {
            std::cout << "float:\t" << this->getArg() << "f" << std::endl;
            std::cout << "double:\t" << this->getArg() << std::endl;
        }
        return 1;
    }
    return 0;
}

void Parser::_handleGenericDisplay() const
{
    std::cout << "char:\t";
    if ( std::isprint( this->getChar() ) ) {
        std::cout << "'" << this->getChar() << "'" << std::endl;
    } else {
        std::cout << "Non displayable" << std::endl;
    }
    std::cout << "int:\t" << this->_intRepr << std::endl;
    std::cout << "float:\t" << this->_floatRepr << "f" << std::endl;
    std::cout << "double:\t" << this->_doubleRepr << std::endl;
}

void Parser::_display() const
{
    if ( this->_handleLiteralDisplay() )
        return;
    this->_handleGenericDisplay();
}

void Parser::execute()
{
    this->_command();
    this->_display();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

char Parser::getChar( void ) const { return this->_charRepr; }

int Parser::getInt( void ) const { return this->_intRepr; }

int Parser::getFloat( void ) const { return this->_floatRepr; }

int Parser::getDouble( void ) const { return this->_doubleRepr; }

std::string const &Parser::getArg( void ) const { return this->_arg; }

bool Parser::getLiteral( void ) const { return this->_literal; }

/*
** --------------------------------- EXCEPTIONS
*----------------------------------
*/

const char *Parser::InvalidConversionException::what() const throw()
{
    return "Error: InvalidConversionException - Invalid conversion detected";
}

const char *Parser::OverflowException::what() const throw()
{
    return "Error: OverflowException - Overflow detected";
}

/* ************************************************************************** */
