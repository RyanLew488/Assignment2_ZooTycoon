#include "Zoo.hpp"

void Zoo::randomEvent()
{
	int random = rand() % 4 + 1;
	
	switch (random) 
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
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
				//double array size if the new tiger will go beyond the array
				if (tigerCount + 1 >= tigerCap)
				{
					expandTiger();
				}

				tigerArr[tigerCount] = new Tiger();
				tigerCount++;
			}
			break;

		//Penguin
		case 2:
			
			if (birthable == true)
			{
				//double array size if the new tiger will go beyond the array
				if (penguinCount + 5 >= penguinCap)
				{
					expandPenguin();
				}
				for (int i = penguinCount; i < (penguinCount + 5); i++) 
				{
					penArr[i] = new Penguin();
				}
			}
					
			for (int i = penguinCount; i < (penguinCount + 5); i++)
			{
				penArr[i] = new Penguin();
			}
			penguinCount += 5;
			

		//Turtles
		case 3:
			if (turtleCount + 10 >= turtleCap)
			{
				expandTurtle();
			}
			for (int i = turtleCount; i < (turtleCount + 10); i++)
			{
				turtleArr[i] = new Turtle();
			}
			turtleCount += 10;			
		}
	}
}

void Zoo::checkAdult()
{
	for (int i = 0; i < tigerCount; i++) 
	{
		if (tigerArr[i]->getAge() >= 3)
		{
			tigerArr[i]->setAdult();
		}
	}

	for (int i = 0; i < penguinCount; i++)
	{
		if (penArr[i]->getAge() >= 3)
		{
			penArr[i]->setAdult();
		}
	}
	
	for (int i = 0; i < turtleCount; i++) 
	{
		if (turtleArr[i]->getAge() >= 3)
		{
			turtleArr[i]->setAdult();
		}

	}

	
}

void Zoo::feed()
{
}

void Zoo::buyAnimal(Animal ** arr)
{
	std::cout << "Please select what animal you would like to purchase" << std::endl;

}

void Zoo::expandTiger()
{
	tigerCap *= 2;
	Animal** tempArr = new Animal*[tigerCap];

	for (int i = 0; i < tigerCount; i++)
	{
		tempArr[i] = new Animal(*tigerArr[i]);
	}

	for (int i = 0; i < tigerCount; i++)
	{
		delete tigerArr[i];
	}
	delete[]tigerArr;

	tigerArr = tempArr;
}

void Zoo::expandTurtle()
{
	turtleCap *= 2;
	Animal** tempArr = new Animal*[turtleCap];

	for (int i = 0; i < penguinCount; i++)
	{
		tempArr[i] = new Animal(*penArr[i]);
	}
}

void Zoo::expandPenguin()
{
	penguinCap *= 2;
	Animal** tempArr = new Animal*[penguinCap];

	for (int i = 0; i < penguinCount; i++)
	{
		tempArr[i] = new Animal(*penArr[i]);
	}

	for (int i = 0; i < tigerCount; i++)
	{
		delete penArr[i];
	}
	delete[]penArr;

	penArr = tempArr;
}
