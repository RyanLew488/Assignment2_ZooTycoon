#pragma once
#include "Animal.hpp"

class Turtle : public Animal {
public:
	Turtle();
	Turtle(int age);
	int getFeedCost();
	int getPayOff();
};