/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 5
Description: Pizza*/

#include <iostream>

using namespace std;

double calculatePricePerArea(double diameter, double price);												// Function definitions for both functions for calculating price per square inch value
double calculatePricePerArea(double length, double width, double price);									// for a circular pizza and another function doing the same for a rectangular pizza. 

int main()
{
	double priceOne, priceTwo, valueOne, valueTwo, lengthOne, widthOne, lengthTwo, widthTwo;				// Declare variables as needed.

	cout << "Enter the diameter, if circular, or length of the first pizza in inches: ";					// Ask the user for information on two pizza's.
		cin >> lengthOne;
	cout << "If applicable, enter the width of the first pizza in inches, otherwise, enter zero: ";
		cin >> widthOne;
	cout << "How much does the first pizza cost? ";
		cin >> priceOne;
	cout << "Enter the diameter, if circular, or length of the second pizza in inches: ";
		cin >> lengthTwo;
	cout << "If applicable, enter the width of the second pizza in inches, otherwise, enter zero: ";
		cin >> widthTwo;
	cout << "How much does the second pizza cost? ";
		cin >> priceTwo;

	if ((widthOne == 0) || (widthTwo == 0))
	{
		valueOne = calculatePricePerArea(lengthOne, priceOne);												// If the pizza is circular, call the first functiion for calcuating the price per square inch or the value of the pizza.
		valueTwo = calculatePricePerArea(lengthTwo, priceTwo);
	}
	else
	{
		valueOne = calculatePricePerArea(lengthOne, widthOne, priceOne);									// If the pizza is rectangular, call the second function for calculating the rectangular pizza's value.
		valueTwo = calculatePricePerArea(lengthTwo, widthTwo, priceTwo);
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	if (valueOne < valueTwo)																				// Display which of the two pizza's have the best value to the user.
		cout << "At $" << valueOne << " per square inch, the first pizza is a better value.\n";
	if (valueOne > valueTwo)
		cout << "At $" << valueTwo << " per square inch, the second pizza is a better value.\n";
	if (valueOne == valueTwo)
		cout << "At $" << valueTwo << " per square inch, both pizzas are the same value.\n";
	return 0;
}

double calculatePricePerArea(double diameter, double price)													// Function one header including return type, function name, and function parameters. Part of function definition.
{
	return (price / (3.14159 * (diameter / 2) * (diameter / 2)));											// Function body with return value and logic. Part of function definition.
}

double calculatePricePerArea(double length, double width, double price)										// Function two header with same name as first function, but differing number of function parameters, allowing us to overload the functions.
{
	return (price / (length * width));																		// Function body with return value and logic. Part of function definition along with the header.
}