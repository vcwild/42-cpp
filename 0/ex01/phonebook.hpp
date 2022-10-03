#ifndef PHONEBOOK_H
#define PHONEBOOK_H

class Contact {
public:
    char        *firstName;
    char        *lastName;
    char        *nickname;
    char       **darkestSecret;
    unsigned int index;
    unsigned int number;

    Contact();
    ~Contact();
}

class PhoneBook {
    Contact    _contacts[8];
    static int _contactIndex;

    Contact *_search( unsigned int const index ) const;
    void     _add( Contact *contact );
    void     _exit( void );
    void     _show( Contact *contact );

public:
    PhoneBook();
    ~PhoneBook();

    int handleAction( void );

    int search( void );
    int add( void );
    int exit( void );
}

#endif
