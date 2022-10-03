#include "phonebook.hpp"
#include <cstdlib>
#include <iostream>
#include <string.h>

#define MAX_BUFFER_SIZE 128

unsigned int PhoneBook::_contactIndex = 0;

PhoneBook::PhoneBook() {}

Contact *PhoneBook::_search( unsigned int const index ) const
{
    return this->_contacts[index];
}

/**
 * @brief Display the saved contacts as a list of 4 columns: index, first name,
 * last name and nickname.
 *
 * @param contact
 */
void PhoneBook::_show( Contact *contact )
{
    int n = 10;

    std::cout << contact->index << std::setw( n ) << "|" << contact->firstName
              << std::setw( n ) << "|" << contact->lastName << std::setw( n )
              << "|" << contact->nickname << std::setw( n ) << std::endl;
}

void PhoneBook::search( void )
{
    char     tempIndex[MAX_BUFFER_SIZE];
    Contact *contact;
    int      index;

    std::cout << "What index you want to search? ";
    std::cin >> tempIndex;
    index = atoi( tempIndex );

    while ( index > 8 || index < 0 ) {
        std::cout << "Invalid index (0 - 8): ";
        std::cin >> tempIndex;
        index = atoi( tempIndex );
    }

    contact = this->_search( ( unsigned int ) index );
    this->_show( contact );
}

void parseFromStdin( char const *message, char *buffer )
{
    std::cout << message;
    std::cin >> buffer;
}

unsigned int handleContactNumber()
{
    char tempNumber[MAX_BUFFER_SIZE];
    int  number;

    do {
        parseFromStdin( "Contact number (use positive numbers): ", tempNumber );
        number = atoi( tempNumber );
    } while ( number < 0 );

    return ( unsigned int ) number;
}

PhoneBook::_add( Contact *contact )
{
    this->_contacts[PhoneBook::_contactIndex] = contact;
    PhoneBook::_contactIndex += 1;

    if ( PhoneBook::_contactIndex > 8 )
        PhoneBook::_contactIndex = 0;
    contact->index = PhoneBook::_contactIndex;
}

void PhoneBook::add( void )
{
    Contact contact;

    parseFromStdin( "Contact first name: ", contact.firstName );
    parseFromStdin( "Contact last name: ", contact.lastName );
    parseFromStdin( "Contact nickname: ", contact.nickname );
    parseFromStdin( "Contact darkest secret: ", contact.darkestSecret );
    contact.number = handleContactNumber();
    this->_add( &contact );
    return 0;
}

int PhoneBook::handleAction( char *action )
{

    if ( compare( action, "ADD" ) )
        return this->add();
    if ( compare( action, "EXIT" ) )
        return this->exit();
    if ( compare( action, "SEARCH" ) )
        return this->search();
    return 1;
}

void PhoneBook::run( void )
{
    char action[MAX_BUFFER_SIZE];

    while ( true ) {
        std::cout << "Please, choose an action: ";
        std::cin >> action;

        if ( this->handleAction( action ) )
            break;
    }
}
