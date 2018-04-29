#include "Tiger.hpp"

Tiger::Tiger() 
{
	age = 1;
	cost = 10000;
	numBabies = 1;
	baseFoodCost = 200;
	payOff = (cost / 5);
}

Tiger::Tiger(int age) 
{
	this->age = age;
	cost = 10000;
	baseFoodCost = 200;
	numBabies = 1;
	payOff = (cost / 5);

}

int Tiger::getFeedCost()
{
	return (baseFoodCost * 5);
}

int Tiger::getPayOff()
{
	return payOff;
}