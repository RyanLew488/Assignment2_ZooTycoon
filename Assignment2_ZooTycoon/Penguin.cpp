#include "Penguin.hpp"

Penguin::Penguin()
{
	age = 1;
	cost = 1000;
	numBabies = 5;
	baseFoodCost = 200;
	payOff = (cost / 10);
}

Penguin::Penguin(int age)
{
	this->age = age;
	cost = 1000;
	baseFoodCost = 200;
	numBabies = 5;
	payOff = (cost / 10);
}

int Penguin::getFeedCost()
{
	return baseFoodCost;
}

int Penguin::getPayOff()
{
	return payOff;
}
