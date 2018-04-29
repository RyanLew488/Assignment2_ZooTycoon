#pragma once
#include <iostream>
#include "Tiger.hpp"
#include "Turtle.hpp"
#include "Penguin.hpp"

class Zoo {

private:
	int bank;
	int tigerCount, tigerCap;
	int turtleCount, turtleCap;
	int penguinCount, penguinCap;
	Animal** tigerArr;
	Animal** turtleArr;
	Animal** penArr;

public:
	void randomEvent();
	void sickness();
	void boom();
	void birth();
	void checkAdult();
	void feed();
	void buyAnimal(Animal** arr);								
	

};