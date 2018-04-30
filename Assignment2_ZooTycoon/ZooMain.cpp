#include "Zoo.hpp" //includes Tiger/Turtle/Penguin.hpp
#include "helperFunctions.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	Zoo playerZoo;
	
	std::cout << "Please buy your initial animals to start your Zoo" << std::endl;

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

	int day = 1;
	bool buyAnimal = false;
	bool keepPlaying = true;
	do 
	{
		if (playerZoo.getBank() <= 0)
		{
			std::cout << "You have run out of money. Game Over!";
			exit(0);
		}

		std::cout << "Welcome to day " << day << std::endl;
		std::cout << "Would you like to buy an animal? Enter y/n to choose: ";
		buyAnimal = yesNoValidation();
		if (buyAnimal)
		{
			std::cout << "Please select which animal you would like: " << std::endl;
			std::cout << "1: Tiger | Price: 10000\n2: Penguin | Price: 1000\n3: Turtle | Price: 100\n";
			int buyChoice = iRangeValid("", 1, 3);

		}

	playerZoo.feed();
	playerZoo.ageZoo();
	playerZoo.randomEvent();

	std::cout << "Would you like to play the next day?";
	keepPlaying = yesNoValidation();
	std::cin.get();
	} while (keepPlaying);
	std::cin.get();
}