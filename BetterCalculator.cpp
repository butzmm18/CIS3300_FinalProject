// BetterCalculator.cpp : Defines the entry point for the console application.
//

/* BetterCalculator.cpp by Michaela Butz
* Uses a function that prompts the user to enter a number. Calls this function twice
* and then calculates the sum of both numbers entered by user.
**/

#include "stdafx.h"
#include <iostream>

int getValue()
{
	// Ask the user for a number
	std::cout << "Enter a number: ";
	int a = 0;
	// Read the number in from the console and store it in variable a
	std::cin >> a;
	return a;
}

int main()
{
	// First call of function
	int x = getValue();
	// Second call of function
	int y = getValue();

	std::cout << "With x = " << x << " and y = " << y << "; x + y = " << x + y << std::endl;
    return 0;
}
