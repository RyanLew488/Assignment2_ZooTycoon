#include "Zoo.hpp"
#include "helperFunctions.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
	srand(time(0));
	Zoo playerZoo;
	
	std::cout << "Please buy your initial animals" << std::endl;

	std::cout << "Would you like to buy one or two tigers? ";
	int tigers = iRangeValid("", 1, 2);
	std::cout << std::endl;

	for (int i = 0; i < tigers; i++)
	{
		playerZoo.buyTiger();
	}

	std::cout << "Would you like to buy one or two penguins? ";
	int penguins = iRangeValid("", 1, 2);
	std::cout << std::endl;

	for (int i = 0; i < tigers; i++)
	{
		playerZoo.buyPenguin();
	}
	
	std::cout << "Would you like to buy one or two turtles? ";
	int turtles = iRangeValid("", 1, 2);
	std::cout << std::endl;
	for (int i = 0; i < tigers; i++)
	{
		playerZoo.buyTurtle();
	}
		
}