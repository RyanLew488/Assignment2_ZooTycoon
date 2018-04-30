#include "Zoo.hpp"

Zoo::Zoo()
{
	bank = 100000;
	tigerCap = 10;
	turtleCap = 10;
	penguinCap = 10;
	tigerCount = 0;
	penguinCount = 0;
	turtleCount = 0;
	tigerArr = new Animal*[10];
	penArr = new Animal*[10];
	turtleArr = new Animal*[10];
}

void Zoo::setBank(int amount)
{
	bank = amount;
}

int Zoo::getBank()
{
	return bank;
}

void Zoo::randomEvent()
{
	int random = rand() % 4 + 1;
	
	switch (random) 
	{
	case 1:
		birth();
		break;

	//boom
	case 2:
		boom();
		break;

	//sickness occurs
	case 3:
		sickness();
		break;

	//nothing happens in case 4
	case 4:
		break;
	}
}

void Zoo::sickness()
{
	if (tigerCount == 0 && penguinCount == 0 && turtleCount == 0) 
	{
		std::cout << "You have no animals, no animal got sick \n";
		return;
	}
	else
	{
		int sick = (rand() % 3 + 1);
		bool sickOccured = false;
		
		while (!sickOccured)
		{
			switch (sick)
			{
			
			
			case 1:
				if (tigerCount > 0) 
				{
					tigerCount--;
					sickOccured = true;
				}
				break;
			case 2:
				if (penguinCount > 0)
				{
					penguinCount--;
					sickOccured = true;
				}
				break;

			case 3:
				if (turtleCount > 0)
				{
					turtleCount--;
					sickOccured = true;
				}
				break;
			}
		}
	}
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

		if (tigerCount == 0 && turtleCount == 0 && penguinCount == 0) 
		{
			std::cout << "You have no animals, no birth occured \n";
			return;
		}
		
		switch (birthChoice) 
		{

		//Tiger
		case 1:
			
			if (tigerCount == 0)
			{
				birthOccured = false;
			}
			else if (birthable == true)
			{
				//double array size if the new tiger will go beyond the array
				if (tigerCount + 1 >= tigerCap)
				{
					expandTiger();
				}

				tigerArr[tigerCount] = new Tiger();
				tigerCount++;
				birthOccured = true;
				break;
			}
			
		//Penguin
		case 2:
			
			if (penguinCount == 0)
			{
				birthOccured = false;
			}
			else if (birthable == true)
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
				
				penguinCount += 5;
				birthOccured = true;
				break;
			}
			
		//Turtles
		case 3:
			if (turtleCount == 0)
			{
				birthOccured = false;
			}

			else if (turtleCount + 10 >= turtleCap)
			{
				expandTurtle();
			}

			for (int i = turtleCount; i < (turtleCount + 10); i++)
			{
				turtleArr[i] = new Turtle();
			}

			turtleCount += 10;
			birthOccured = true;
			break;
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
	for (int i = 0; i < tigerCount; i++)
	{
		bank -= tigerArr[i]->getFeedCost();
	}

	for (int i = 0; i < penguinCount; i++)
	{
		bank -= penArr[i]->getFeedCost();
	}

	for (int i = 0; i < turtleCount; i++)
	{
		bank -= turtleArr[i]->getFeedCost();
	}
	std::cout << "Your bank account after feeding: $" << getBank();
}

void Zoo::buyTiger()
{
	if (tigerCount == tigerCap)
	{
		expandTiger();
	}
	tigerArr[tigerCount] = new Tiger(1);
	bank -= tigerArr[tigerCount]->getCost();
	tigerCount++;
}

void Zoo::buyTurtle()
{
	if (turtleCount == turtleCap)
	{
		expandTiger();
	}
	turtleArr[turtleCount] = new Turtle(1);
	turtleCount++;
}

void Zoo::buyPenguin()
{
	if (penguinCount == penguinCap)
	{
		expandTiger();
	}
	penArr[penguinCount] = new Penguin(1);
	penguinCount++;
}

void Zoo::expandTiger()
{
	tigerCap *= 2;
	Animal** tempArr = new Animal*[tigerCap];

	for (int i = 0; i < tigerCount; i++)
	{
		tempArr[i] = tigerArr[i];
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
		tempArr[i] = turtleArr[i];
	}
}

void Zoo::expandPenguin()
{
	penguinCap *= 2;
	Animal** tempArr = new Animal*[penguinCap];

	for (int i = 0; i < penguinCount; i++)
	{
		tempArr[i] = penArr[i];
	}

	for (int i = 0; i < tigerCount; i++)
	{
		delete penArr[i];
	}
	delete[]penArr;

	penArr = tempArr;
}

void Zoo::ageZoo()
{
	for (int i = 0; i < tigerCount; i++)
	{
		tigerArr[i]->getOlder();
	}

	for (int i = 0; i < penguinCount; i++)
	{
		penArr[i]->getOlder();
	}

	for (int i = 0; i < turtleCount; i++)
	{
		turtleArr[i]->getOlder();
	}
}
