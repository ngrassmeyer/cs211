/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Homework 1
Description: Variable Practice*/

#include <iostream>

using namespace std;

int main()
{
	cout << "This program will prompt for two integers and then display the result of addition, subtraction, and multiplication on the numbers. \n";

	int //Declare all variables.
		inptOne,
		inptTwo,
		resultProd,
		resultSum,
		resultDif;

	cout << "\nEnter the first integer.";
		cin >> inptOne; //Initialize inptOne
	cout << "\nEnter the secong integer.";
		cin >> inptTwo; //Initialize inptTwo

		resultProd = inptOne * inptTwo; //After the variables inptOne and inptTwo are initialized, initialize all the result variables, otherwise Visual Studio, as it should, will show an error.
		resultSum = inptOne + inptTwo;
		resultDif = inptOne - inptTwo;

	cout << "The product of ";
	cout << inptOne;
	cout << "and ";
	cout << inptTwo;
	cout << "is ";
	cout << resultProd; //Print all four results.
	cout << "The sum of ";
	cout << inptOne;
	cout << "and ";
	cout << inptTwo;
	cout << "is ";
	cout << resultSum;
	cout << "The difference of ";
	cout << inptOne;
	cout << "and ";
	cout << inptTwo;
	cout << "is ";
	cout << resultDif;

	return 0;
}
