#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#define MAX_BUFFER_SIZE 128

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>

class Contact {
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string darkestSecret;
    char        index[MAX_BUFFER_SIZE];
    std::string number;

    Contact();
    ~Contact();
};

class PhoneBook {
private:
    Contact    _contacts[8];
    static int _contactIndex;

    Contact *_search( int index );
    void     _add( Contact *contact );
    void     _exit( void );
    void     _show( Contact *contact );
    void     _truncate( std::string *line );

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
