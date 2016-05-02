// FindGCD.cpp : Defines the entry point for the console application.
//

/* FindGCD.cpp by Michaela Butz
* Prompts the user to enter two numbers and the outputs their 
* Greatest Common Divisor.
*
*/

#include "stdafx.h"
#include <iostream>

// makes coding easier
using namespace std;

int main()
{
	int num1;

	// Notice the 'std::' is not needed when you use the 'using' function
	cout << "Enter first number: "; 
	cin >> num1;

	int num2;
	cout << "Enter second number: ";
	cin >> num2;

	int gcd;
	for (int i = 1; i <= num1&&i <= num2; i++){
		if (num1%i == 0 && num2%i == 0) {
			gcd = i;
		}
	}
	cout << "The GCD of " << num1 << " and " << num2 << " = " << gcd << endl;
    return 0;
}
