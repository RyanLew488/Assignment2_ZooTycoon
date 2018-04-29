#pragma once
#include "helperFunctions.hpp"
class Animal {

protected:
	int age;
	int cost;
	int baseFoodCost;
	int numBabies;
	int payOff;
	bool adult;

public:
	Animal();
	Animal(int age);
	virtual void birth() = 0;
	virtual void sickness() = 0;
	virtual int getFeedCost() = 0;
	virtual int getPayOff() = 0;
	int getAge();
	bool isAdult();
	void setAdult();
	void getOlder();

};