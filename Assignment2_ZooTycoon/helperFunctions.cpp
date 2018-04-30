/*********************************************************************
** Author:Ryan Lew
** Date: 4/10/2018
** Description: A collection of helpful functions. Contains input validation
**				and a general menu function that can be edited for other programs
*********************************************************************/

#include <iostream>
#include <sstream>
#include <string>

/*********************************************************************
** Description:Integer check. 
*********************************************************************/
int iValid(std::string message) {

	bool valid = false;
	int validInteger = 0;
	std::string input = "";
	
	do {

		std::cout << message << std::endl;
		std::getline(std::cin, input);
		std::stringstream check(input);

		if (check >> validInteger)	{
			valid = true;
		}


	} while (valid == false);

	return validInteger;
}

/*********************************************************************
** Description: Range validation check. 
*********************************************************************/
int iRangeValid(std::string message, int lowerBound, int upperBound) {

	bool valid = false;
	int validInteger = 0;
	std::string input = "";

	do {

		std::getline(std::cin, input);
		std::stringstream check(input);

		if (check >> validInteger) {

			if (validInteger < lowerBound || validInteger > upperBound) {

				std::cout << "The number you entered exceeded boundaries \n";
				std::cout << "Please enter a number between " << lowerBound << " and " << upperBound << std::endl;

			}
			else {

				valid = true;

			}
		}

		else {

			std::cout << "Please enter an integer." << std::endl;

		}


	} while (valid == false);
	return validInteger;
}

/*********************************************************************
** Description: This function only accepts Y/y or N/n as a valid input.
*********************************************************************/

bool yesNoValidation() {

	bool answer = false;
	bool valid = false;
	std::string input;

	do {
	
 		std::cin >> input;

		if (input == "y" || input == "Y") {
			answer = true;
			valid = true;
		}

		else if (input == "n" || input == "N") {
			valid = true;
		}

		if (valid == false) {
			std::cout << "Please enter y or n" << std::endl;
		}
		
	} while (valid == false);

	return answer;
}

/*********************************************************************
** Description: Menu function passes all values by reference so you can
**				use those values in statements in the calling function.
**				allows you to edit multiple things instead of returning
**				a single value.
*********************************************************************/

void menu(int& p1s, int& p2s, int& rounds, int& p1Type, int& p2Type) {

	std::cout << "How many rounds of war do you want to play?" << std::endl;
	std::cout << "Please select between 1 and 1000" << std::endl;
	rounds = iRangeValid("", 1, 1000);

	std::cout << "What kind of die should player 1 have?" << std::endl;
	std::cout << "1: for loaded" << std::endl;
	std::cout << "0: for normal" << std::endl;
	p1Type = iRangeValid("", 0, 1);
	

	std::cout << "How many sides should each player 1's die have?" << std::endl;
	std::cout << "Please select between 2 and 42" << std::endl;
	p1s = iRangeValid("", 2, 42);

	std::cout << "What kind of die should player 2 have?" << std::endl;
	std::cout << "1: for loaded" << std::endl;
	std::cout << "0: for normal" << std::endl;
	p2Type = iRangeValid("", 0, 1);

	std::cout << "How many sides should each player 2's die have?" << std::endl;
	std::cout << "Please select between 2 and 42" << std::endl;
	p2s = iRangeValid("", 2, 42);

}
