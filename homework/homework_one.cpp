/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Homework 1
Description: Basic C++ "Calculator"*/

#include <iostream>

using namespace std;

int main()
{
	cout << "This program will prompt for two integers and then display the result of addition,\nsubtraction, and multiplication on the numbers.\n\n";

	int //Declare all variables with datatype int. 
		inptOne,
		inptTwo;

	cout << "Enter the first integer: "; //Ask user for the value of inptOne.
		cin >> inptOne; //Initialize inptOne with the value the user entered.
	cout << "Enter the second integer: "; //Repeat for inptTwo.
		cin >> inptTwo;
	cout << endl; //Skip a line with endl.

	cout << "The sum of " << inptOne << " and " << inptTwo << " is " << inptOne + inptTwo << endl //Print results to the screen.
		<< "The difference of " << inptOne << " and " << inptTwo << " is " << inptOne - inptTwo << endl
		<< "The product of " << inptOne << " and " << inptTwo << " is " << inptOne * inptTwo << endl;

	return 0;
}
