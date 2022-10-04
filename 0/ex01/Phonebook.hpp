#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>

class PhoneBook {
private:
    Contact    _contacts[8];
    static int _contactIndex;

    Contact    *_search( int index );
    void        _add( Contact *contact );
    void        _exit( void );
    void        _show( Contact *contact );
    void        _showDetails( Contact *contact );
    std::string _truncate( std::string *line );

public:
    PhoneBook();
    ~PhoneBook();

    void run( void );
    int  handleAction( std::string *action );

    int search( void );
    int add( void );
    int exit( void );
};

#endif
