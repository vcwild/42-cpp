#include <iostream>
#include "Sample.hpp"

void	logComparison(Sample *sample, Sample *other)
{
	int			status;

	std::cout << "Sample.foo current value is: " << sample->getFoo() << std::endl;
	std::cout << "Other.foo current value is: " << other->getFoo() << std::endl;

	status = sample->compare(other);
	if (status > 0)
		std::cout << "Sample.foo is greater than Other.foo" << std::endl;
	else if (status == -1)
		std::cout << "Sample.foo is lower than Other.foo" << std::endl;
	else
		std::cout << "Sample.foo is equal to Other.foo" << std::endl;

	return ;
}

int	main(void)
{
	Sample	sample(42);
	Sample	other(12);

	std::cout << "foo value is: " << sample.getFoo() << std::endl;

	if (sample.setFoo(25))
		std::cout << "foo new value is: " << sample.getFoo() << std::endl;
	if (!sample.setFoo(-20))
		std::cout << "foo is keeping its latest value: " << sample.getFoo() << std::endl;

	logComparison(&sample, &other);

	return 0;
}
