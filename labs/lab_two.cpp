/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 2
Description: Variable Practice*/

#include <iostream>

using namespace std;

int main()
{
	cout << "This program is designed to perform four operations (add, subtract, multiply, and divide) \non two values that you input in the order they were entered... \n"; //Program deifnition.

	long double //Declare all variables.
		inptOne,
		inptTwo,
		resultQuot,
		resultProd,
		resultSum,
		resultDif;

	cout << "\nPlease input your first value... \n";
	cin >> inptOne; //Initialize inptOne
	cout << "\nPlease input your second value... \n";
	cin >> inptTwo; //Initialize inptTwo

	resultQuot = inptOne / inptTwo; //After the variables inptOne and inptTwo are initialized, initialize all the result variables, otherwise Visual Studio, as it should, will show an error.
	resultProd = inptOne * inptTwo;
	resultSum = inptOne + inptTwo;
	resultDif = inptOne - inptTwo;

	cout << "\nThe quotient of the values is... \n" << resultQuot //Print all four results.
		<< "\nThe product of the values is... \n" << resultProd
		<< "\nThe sum of the values is... \n" << resultSum
		<< "\nThe difference of the values is... \n" << resultDif << "\n\n";

	return 0;
}
