#pragma once
#include "Tiger.hpp"
#include "Turtle.hpp"
#include "Penguin.hpp"

class Zoo {

private:
	int bank;
	int tigerCount;
	int turtleCount;
	int penguinCount;
	Tiger** tigerArr;
	Turtle** turtleArr;
	Penguin** penArr;
	bool birth;

public:
	void randomEvent();
	void sickness();
	void boom();
	void birth();
	void checkAdult();
	void feed();
};