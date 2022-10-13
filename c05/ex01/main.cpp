#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cassert>

void testCreateValidInstance()
{
    try {
        Form form( "Form", 42, 43 );
        assert( form.getName() == "Form" );
        assert( form.getSigned() == false );
        assert( form.getGradeToSign() == 42 );
        assert( form.getGradeToExecute() == 43 );

        Bureaucrat rodrigo( "Rodrigo", 42 );
        form.beSigned( rodrigo );
        assert( form.getSigned() == true );

    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

void testCreateTooHighGrade()
{
    try {
        Form form( "Form", 0, 1 );

    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

void testCreateTooLowGrade()
{
    try {
        Form form( "Form", 151, 1 );

    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

void testCreateTooHighExecuteGrade()
{
    try {
        Form form( "Form", 2, 1 );

    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

void testCreateTooHighSignGrade()
{
    Form form( "Form", 25, 25 );
    form.signForm( Bureaucrat( "Rodrigo", 27 ) );
}

void testCopyForm()
{
    Form form( "Generic", 25, 25 );
    Form copy( form );
    std::cout << copy << std::endl;
    assert( copy.getName() == "Generic" );
    assert( copy.getSigned() == false );
    assert( copy.getGradeToSign() == 25 );
    assert( copy.getGradeToExecute() == 25 );
}

int main()
{
    testCreateValidInstance();

    testCreateTooHighGrade();

    testCreateTooLowGrade();

    testCreateTooHighExecuteGrade();

    testCreateTooHighExecuteGrade();

    testCreateTooHighSignGrade();

    testCopyForm();

    return 0;
}
