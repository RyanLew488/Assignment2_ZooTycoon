#pragma once
class Animal {

protected:
	int age;
	int cost;
	int baseFoodCost;
	int numBabies;
	int payOff;
	bool adult;

public:
	virtual void birth() = 0;
	virtual void sickness() = 0;
	int getFeedCost();
	int getPayOff();
};