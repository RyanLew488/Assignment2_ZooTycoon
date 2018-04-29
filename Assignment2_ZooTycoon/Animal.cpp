#include "Animal.hpp"

int Animal::getAge()
{
	return age;
}

bool Animal::isAdult()
{
	return adult;
}

void Animal::setAdult()
{
	isAdult = true;
}

void Animal::getOlder()
{
	age++;
}
