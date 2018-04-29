#pragma once
#include "Animal.hpp"

class Tiger : public Animal
{

public:
	Tiger();
	Tiger(int age);
	int getFeedCost();
	int getPayOff();
};