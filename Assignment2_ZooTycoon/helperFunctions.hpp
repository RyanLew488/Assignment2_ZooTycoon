/*********************************************************************
** Author:Ryan Lew
** Date: 4/10/2018
** Description: Header file for the helpful functions. Contains the
**				function prototypes.
*********************************************************************/

#include <string>

void menu(int& p1s, int& p2s, int& rounds, int& p1Type, int& p2Type);
int iValid(std::string message);
int iRangeValid(std::string message, int lowerBound, int upperBound);
bool yesNoValidation();