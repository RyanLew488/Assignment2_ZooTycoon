#include "Animal.hpp"

int Animal::getAge()
{
	return age;
}

bool Animal::isAdult()
{
	return adult;
}

void Animal::getOlder()
{
	age++;
}
