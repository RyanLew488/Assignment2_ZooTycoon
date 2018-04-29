#pragma once
#include "Animal.hpp"

class Penguin : public Animal {

public:
	Penguin();
	Penguin(int age);
	int getFeedCost();
	int getPayOff();

};