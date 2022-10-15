#ifndef PARSER_HPP
#define PARSER_HPP

#include <iostream>
#include <string>

#define CONVERT_CHAR ( 1L << 0 )
#define CONVERT_INT ( 1L << 1 )
#define CONVERT_FLOAT ( 1L << 2 )
#define CONVERT_DOUBLE ( 1L << 3 )

class Parser {

public:
    Parser( std::string const &arg );
    Parser( Parser const &src );
    ~Parser();

    bool isChar( std::string const &str );
    bool isInt( std::string const &str );
    bool isDouble( std::string const &str );
    bool isFloat( std::string const &str );

    void castChar( char const *str );
    void castInt( char const *str );
    void castDouble( char const *str );
    void castFloat( char const *str );

    void execute();

    char               getChar() const;
    int                getInt() const;
    int                getFloat() const;
    int                getDouble() const;
    std::string const &getArg() const;
    bool               getLiteral( void ) const;

    class InvalidConversionException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class OverflowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

private:
    std::string const   &_arg;
    char                 _charRepr;
    long int             _intRepr;
    float                _floatRepr;
    double               _doubleRepr;
    bool                 _literal = false;
    static unsigned long _toConvert[];

    void _command();
    void _dispatch( char const *str, unsigned long flag );
    void _display() const;
    void _handleGenericDisplay() const;
    int  _handleLiteralDisplay() const;
};

std::ostream &operator<<( std::ostream &o, Parser const &i );

#endif
