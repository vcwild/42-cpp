#include <iostream>
#include "Sample.hpp"

Sample::Sample(int value) {
	std::cout << "Constructor called" << std::endl;
	this->setFoo(value);

	return ;
}

int	Sample::getFoo(void) const {
	return this->_foo;
}

bool	Sample::setFoo(int value) {
	if (value >= 0) {
		this->_foo = value;
		return true;
	}

	return false;
}

int	Sample::compare(Sample *other) const {
	if (this->getFoo() < other->getFoo())
		return -1;
	if (this->getFoo() > other->getFoo())
		return 1;

	return 0;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" <<std::endl;
	return ;
}
