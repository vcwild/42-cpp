#ifndef NOSED_HPP
#define NOSED_HPP

#include <string>

class NoSed {

public:
    NoSed( std::string filename );
    ~NoSed();

    void doSed( std::string origin, std::string dest );

private:
    std::string _fileContent;
    std::string _filename;

    int  _readInFile( void );
    void _replaceFileExtension( void );
    void _replaceSubstrings( std::string origin, std::string dest );
    void _writeOutputFile( void );
};

#endif
