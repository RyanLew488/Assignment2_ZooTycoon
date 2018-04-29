#include "Zoo.hpp"

void Zoo::randomEvent()
{

}

void Zoo::sickness()
{

}

void Zoo::boom()
{

}

void Zoo::birth()

{
	bool birthOccured = false;
	while (!birthOccured)

	{

		int birthChoice = (rand() % 3) + 1;
		bool birthable = false;
		

		switch (birthChoice) 
		{
		
		//Tiger
		case 1:
			
			if (birthable == true)
			{
				if (tigerCount + 1 >= tigerCap)
				{
					expandArr(tigerArr, tigerCap, tigerCount);
				}

				tigerArr[tigerCount] = new Tiger();
				tigerCount++;
			}
			break;

		//Penguin
		case 2:
			
			if (penguinCount + 5 >= penguinCap)
			{
				expandArr(penArr, penguinCap, penguinCount);
			}
			
			for (int i = penguinCount; i < penguinCount + 5; i++)
			{
				penArr[i] = new Penguin();
			}
			
			penguinCount += 5;
			

		//Turtles
		case 3:
			if (turtleCount + 10 >= turtleCap)
			{
				expandArr(turtleArr, turtleCap, penguinCount);
			}
			for (int i = turtleCount; i < turtleCount + 10; i++)
			{
				turtleArr[i] = new Turtle();
			}
			turtleCount += 10;
			
		}
	}
}

void Zoo::checkAdult()
{
}

void Zoo::feed()
{
}

void Zoo::buyAnimal(Animal ** arr)
{
	std::cout << "Please select what animal you would like to purchase" << std::endl;

}

void Zoo::expandArr(Animal ** arr, int& cap, int numAnimals)
{
	cap = cap * 2;
	Animal** tempArr = new Animal*[cap];

	for (int i = 0; i < numAnimals; i++) 
	{
		tempArr[i] = new Animal(*arr[i]);
	}

	for (int i = 0; i < numAnimals; i++)
	{
		delete arr[i];
	}
	delete[]arr;

	arr = tempArr;
}
