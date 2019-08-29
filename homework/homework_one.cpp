/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Homework 1
Description: Basic C++ "Calculator"*/

#include <iostream>

using namespace std;

int main()
{
	cout << "This program will prompt for two integers and then display the result of addition," << endl 
		 << "subtraction, and multiplication on the numbers." << endl << endl;

	int //Declare all variables with datatype int. 
		inptOne,
		inptTwo,
		resultProd,
		resultSum,
		resultDif;

	cout << "Enter the first integer: "; //Ask user for the value of inptOne.
		cin >> inptOne; //Initialize inptOne with the value the user entered.
	cout << "Enter the second integer: "; //Repeat for inptTwo.
		cin >> inptTwo;
	cout << endl; //Skip a line with endl.

	resultProd = inptOne * inptTwo; //After the variables inptOne and inptTwo are initialized, initialize all the result variables, otherwise Visual Studio, as it should, will show an error.
	resultSum = inptOne + inptTwo;
	resultDif = inptOne - inptTwo;

	cout << "The sum of " << inptOne << " and " << inptTwo << " is " << resultSum << endl //Print results to the screen.
		 << "The difference of " << inptOne << " and " << inptTwo << " is " << resultDif << endl
		 << "The product of " << inptOne << " and " << inptTwo << " is " << resultProd << endl;

	return 0;
}
