/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Homework 1
Description: Basic C++ "Calculator"*/

#include <iostream>

using namespace std;

int main()
{
	cout << "This program will prompt for two integers and then display the result \nof addition, subtraction, and multiplication on the numbers. \n\n";

	int //Declare all variables.
		inptOne,
		inptTwo,
		resultProd,
		resultSum,
		resultDif;

	cout << "Enter the first integer: ";
	cin >> inptOne; //Initialize inptOne
	cout << "Enter the second integer: ";
	cin >> inptTwo; //Initialize inptTwo
	cout << "\n";

	resultProd = inptOne * inptTwo; //After the variables inptOne and inptTwo are initialized, initialize all the result variables, otherwise Visual Studio, as it should, will show an error.
	resultSum = inptOne + inptTwo;
	resultDif = inptOne - inptTwo;

	cout << "The product of " << inptOne << " and " << inptTwo << " is " << resultProd << endl
		<< "The sum of " << inptOne << " and " << inptTwo << " is " << resultSum << endl
		<< "The difference of " << inptOne << " and " << inptTwo << " is " << resultDif << endl << "\n";

	return 0;
}
