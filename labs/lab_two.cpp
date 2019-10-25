/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 2
Description: Variable Practice*/

#include <iostream>

using namespace std;

int main()
{
	cout << "This program is designed to apply four operations (add, subtract, multiply, and divide)" << endl
		<< "to two values inputted by the user..." << endl << endl; //Program deifnition.

	long double //Declare all variables.
		inptOne,
		inptTwo,
		resultQuot,
		resultProd,
		resultSum,
		resultDif;

	cout << "Please input your first value... ";
		cin >> inptOne; //Initialize inptOne
	cout << "Please input your second value... ";
		cin >> inptTwo; //Initialize inptTwo
	cout << endl;

	resultQuot = inptOne / inptTwo; //After the variables inptOne and inptTwo are initialized, initialize all the result variables, otherwise Visual Studio, as it should, will show an error.
	resultProd = inptOne * inptTwo;
	resultSum = inptOne + inptTwo;
	resultDif = inptOne - inptTwo;

	cout << "The quotient of the values is... " << resultQuot << endl//Print all four results.
		<< "The product of the values is... " << resultProd << endl
		<< "The sum of the values is... " << resultSum << endl
		<< "The difference of the values is... " << resultDif << endl;

	return 0;
}