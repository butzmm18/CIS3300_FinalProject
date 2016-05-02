// AreaOfCircleWithRadius.cpp : Defines the entry point for the console application.
//

/* AreaOfCircleWithRadius.cpp by Michaela Butz
* Prompts the user to enter a number (radius) and then calculates the 
* area of a circle with given radius.
*
**/

#include "stdafx.h"
#include <iostream>
#define PI 3.14159265 // defines a constant

float AreaCirc(float radius);

int main()
{
	// Define your variables
	float radius, area;
	// Get the radius from the user	    
	std::cout << "Enter Radius: ";
	// Store number from user in 'radius'
	std::cin >> radius;
	// Call the function that calculates area with radius given from user
	area = AreaCirc(radius);

	// Print out your result
	std::cout << "The area of the circle is: " << area << std::endl;
	return 0;
}

float AreaCirc(float radius)
{
	return (PI*(radius*radius));
}
