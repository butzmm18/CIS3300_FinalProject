// CRUDexample.cpp : Defines the entry point for the console application.
//

/* CRUDexample.cpp by Michaela Butz
* This program is like many of the CRUD things we have done before.
* However, it does not Retrieve. The default values for the array are set to 0.
* The user can Create new values, Update old values, and Delete values.
* 
**/

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

//using namespace std;
int array[10];

void DisplayArray() {
	for (int i = 0; i < 10; i++) {
		std::cout << "Array [ " << i << " ] = " << array[i] << std::endl;
	}
}
void DefaultValues() {
	std::cout << "Default Values: " << std::endl;
	for (int i = 0; i < 10; i++) {
		array[i] = 0;
		std::cout << "array [" << i << "]" << "= " << array[i] << std::endl;
	}
}

void CreateValues() {
	std::cout << "Enter 10 Values: " << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cin >> array[i];
	}
	std::cout << "\n Create Successful " << std::endl;
}

void DeleteValues() {
	std::cout << "Enter an index for value deletion: ";
	int index;
	std::cin >> index;
	if (index > 9 || index < 0) {
		std::cout << "Invalid index, try again. " << std::endl;
		DeleteValues();
	}
	else {
		array[index] = 0;
	}
	std::cout << "\nDeletion Successful " << std::endl;
}

void UpdateValues() {
	std::cout << "Enter index for value update: ";
	int index;
	std::cin >> index;
	if (index > 9 || index < 0) {
		std::cout << "Invalid index, try again. " << std::endl;
		UpdateValues();
	}
	else {
		std::cout << "New value for index = " << index << ": " << std::endl;
		std::cin >> array[index];
		std::cout << "\nUpdate Successful " << std::endl;
	}
}

int main()
{
	char option;
	DefaultValues();

	do {
		std::cout << "\n(0) Quit \n(1) Create New Values \n(2) Update Old Values \n(3) Delete Values \n\nChoice = ";
		std::cin >> option;
		if (option == '1') {
			CreateValues();
			std::cout << "Values to Create: " << std::endl;
			DisplayArray();
		}
		else if (option == '2') {
			UpdateValues();
			std::cout << "Updated: " << std::endl;
			DisplayArray();
		}
		else if (option == '3') {
			DeleteValues();
			std::cout << "After Deletion: " << std::endl;
			DisplayArray();
		}
		else if (option != '0') {
			std::cout << "Invalid option, try again. " << std::endl;
		}
	} while (option != '0');
	system("cls"); // clears the screen
	std::cout << "\nProgram ended " << std::endl;
    return 0;
}
