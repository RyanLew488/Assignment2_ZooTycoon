#include "Turtle.hpp"

Turtle::Turtle()
{
	age = 1;
	cost = 100;
	numBabies = 10;
	baseFoodCost = 200;
	payOff = (cost / 20);
}

Turtle::Turtle(int age)
{
	this->age = age;
	cost = 100;
	numBabies = 10;
	baseFoodCost = 200;
	payOff = (cost / 20);
}

int Turtle::getFeedCost()
{
	return 0;
}

int Turtle::getPayOff()
{
	return 0;
}
