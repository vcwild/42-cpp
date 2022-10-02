#include <iostream>
#include "Sample.hpp"

/**
 * @brief Initialize static non-member attributes
 * outside of any class definition.
 *
 */
int	Sample::_instanceCounter = 0;

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	Sample::_instanceCounter+= 1;

	return ;
}

/**
 * @brief Non-member functions do not have the `this` keyword.
 * In the function body, class instances and class attributes
 * are called by their own :: naming instead of using `this`.
 *
 * @return int
 */
int	Sample::getNumberOfInstances(void) {
	return Sample::_instanceCounter;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" <<std::endl;
	Sample::_instanceCounter -= 1;
	return ;
}
