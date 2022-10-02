#include <iostream>
#include "Sample.hpp"

void createTwo(void) {
	Sample one;
	Sample other;

	std::cout << "[createTwo] Number of instances is: "
						<< Sample::getNumberOfInstances() << std::endl;

	return ;
}

void createOne(void) {
	Sample sample;

	std::cout << "[createOne] Number of instances is: "
						<< Sample::getNumberOfInstances() << std::endl;

	createTwo();

	return ;
}

int	main(void)
{

	std::cout << "[main] Number of instances is: "
						<< Sample::getNumberOfInstances() << std::endl;

	createOne();

	std::cout << "[main] Number of instances is: "
						<< Sample::getNumberOfInstances() << std::endl;

	return 0;
}
