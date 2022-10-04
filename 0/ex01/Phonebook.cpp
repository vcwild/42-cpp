#include "phonebook.hpp"
#include "contact.hpp"

int PhoneBook::_contactIndex = 0;

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

Contact *PhoneBook::_search( int index ) { return &this->_contacts[index]; }

std::string PhoneBook::_truncate( std::string *line )
{
    std::string newLine;

    newLine = *line;
    if ( line->length() > 10 ) {
        newLine    = line->substr( 0, 10 );
        newLine[9] = '.';
    }

    return newLine;
}

/**
 * @brief Display the saved contacts as a list of 4 columns: index, first
 * name, last name and nickname.
 *
 * @param contact
 */
void PhoneBook::_show( Contact *contact )
{
    int n = 10;

    if ( contact->firstName.empty() )
        return;

    std::cout << std::setw( n ) << std::right << contact->index << "|";
    std::cout << std::setw( n ) << std::right
              << this->_truncate( &contact->firstName ) << "|";
    std::cout << std::setw( n ) << std::right
              << this->_truncate( &contact->lastName ) << "|";
    std::cout << std::setw( n ) << std::right
              << this->_truncate( &contact->nickname ) << "\n";
}

void PhoneBook::_showDetails( Contact *contact )
{
    if ( contact->firstName.empty() ) {
        std::cout << "Sorry, this contact does not exist!" << std::endl;
        return;
    }
    std::cout << "First name: " << contact->firstName << std::endl;
    std::cout << "Last name: " << contact->lastName << std::endl;
    std::cout << "Phone number: " << contact->number << std::endl;
    std::cout << "Nickname: " << contact->nickname << std::endl;
    std::cout << "Darkest secret: " << contact->darkestSecret << std::endl;
}

int PhoneBook::search( void )
{
    std::string tempIndex;
    Contact    *contact = NULL;
    int         index   = 0;

    std::cout << "Available contacts:" << std::endl;

    for ( int i = 0; i < 8; i++ ) {
        contact        = this->_search( i );
        contact->index = i;
        this->_show( contact );
    }

    std::cout << "Which index you want to search? ";
    std::getline( std::cin, tempIndex );
    index = atoi( tempIndex.c_str() );

    while ( index > 7 || index < 0 ) {
        std::cout << "Invalid index (0 - 7): ";
        std::getline( std::cin, tempIndex );
        index = atoi( tempIndex.c_str() );
    }

    contact = this->_search( index );
    this->_showDetails( contact );

    return 0;
}

void PhoneBook::_add( Contact *contact )
{
    this->_contacts[PhoneBook::_contactIndex] = *contact;

    PhoneBook::_contactIndex += 1;
    if ( PhoneBook::_contactIndex > 7 )
        PhoneBook::_contactIndex = 0;
}

static void parseFromCin( char const *message, std::string *buffer )
{
    std::cout << message;
    std::getline( std::cin, *buffer );
}

int PhoneBook::add( void )
{
    Contact contact;

    parseFromCin( "Contact first name: ", &contact.firstName );
    parseFromCin( "Contact last name: ", &contact.lastName );
    parseFromCin( "Contact nickname: ", &contact.nickname );
    parseFromCin( "Contact number: ", &contact.number );
    parseFromCin( "Contact darkest secret: ", &contact.darkestSecret );
    this->_add( &contact );

    return 0;
}

int PhoneBook::exit( void ) { return 1; }

int PhoneBook::handleAction( std::string *action )
{
    if ( action->compare( "ADD" ) == 0 )
        return this->add();
    else if ( action->compare( "EXIT" ) == 0 )
        return this->exit();
    else if ( action->compare( "SEARCH" ) == 0 )
        return this->search();
    return 0;
}

void PhoneBook::run( void )
{
    std::string action;

    while ( true ) {
        std::cout << "Please, choose an action: ";
        std::getline( std::cin, action );

        if ( this->handleAction( &action ) )
            return;
    }
}
