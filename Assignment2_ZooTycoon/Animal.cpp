#include "Animal.hpp"
Animal::Animal()
{
	age = 3;
	cost = 1000;
	baseFoodCost = 200;
	numBabies = 1;
	payOff = 1000;
	adult = true;
}
int Animal::getCost()
{
	return cost;
}
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
	adult = true;
}

void Animal::getOlder()
{
	age++;
}
