#include <iostream>
#include "Sample.hpp"

Sample::Sample(float const f) : pi(f), qd(42) {
	std::cout << "Constructor called" << std::endl;

	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

/**
 * @brief A constant declaration before the curly braces in a member function
 * states that the function body will not alter the instance attributes.
 *
 */
void Sample::bar(void) const {
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	return ;
}
