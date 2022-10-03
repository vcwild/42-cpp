#include "phonebook.hpp"

int PhoneBook::_contactIndex = 0;

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

Contact::Contact() {}

Contact::~Contact() {}

Contact *PhoneBook::_search( int index ) { return &this->_contacts[index]; }

void PhoneBook::_truncate( std::string *line )
{
    std::string newLine;

    newLine = *line;
    if ( line->length() > 10 ) {
        newLine    = line->substr( 0, 10 );
        newLine[9] = '.';
    }

    *line = newLine;
}

/**
 * @brief Display the saved contacts as a list of 4 columns: index, first
 * name, last name and nickname.
 *
 * @param contact
 */
void PhoneBook::_show( Contact *contact )
{
    int   n = 10;
    char *repr;

    this->_truncate( &contact->firstName );
    this->_truncate( &contact->lastName );
    this->_truncate( &contact->nickname );

    std::cout << contact->index << std::right << std::setw( n ) << "|";
    std::cout << contact->firstName << std::right << std::setw( n ) << "|";
    std::cout << contact->lastName << std::right << std::setw( n ) << "|";
    std::cout << contact->nickname << std::right << std::setw( n );
}

int PhoneBook::search( void )
{
    char tempIndex[MAX_BUFFER_SIZE];
    int  index = 0;

    std::cout << "What index you want to search? ";
    std::cin >> tempIndex;
    index = atoi( tempIndex );

    while ( index > 8 || index < 0 ) {
        std::cout << "Invalid index (0 - 8): ";
        std::cin >> tempIndex;
        index = atoi( tempIndex );
    }

    Contact *contact  = this->_search( index );
    contact->index[0] = tempIndex[0];
    contact->index[1] = tempIndex[1];
    this->_show( contact );
    return 0;
}

void parseFromCin( char const *message, std::string *buffer )
{
    std::cout << message;
    std::getline( std::cin, *buffer );
}

void PhoneBook::_add( Contact *contact )
{
    this->_contacts[PhoneBook::_contactIndex] = *contact;

    PhoneBook::_contactIndex += 1;
    if ( PhoneBook::_contactIndex > 8 )
        PhoneBook::_contactIndex = 0;
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
    if ( action->compare( "EXIT" ) == 0 )
        return this->exit();
    if ( action->compare( "SEARCH" ) == 0 )
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
            break;
    }
}
