/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Homework 2
Description: Number Logger*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float i, pMin, nMax, pMax = 0, nMin = 0;								// Initialize all the variables and declare all equal to zero except the user input variable
	unsigned short pNum = 0, nNum = 0;

	cout << "Entering 0 will terminate the sequence of input values.\n";

	do {																	// Using a do while loop, ask the user for the first number. Upon receiving the number, decide whether it is > or < 0.
		cout << "Enter a number: ";
			cin >> i;
		if (i > 0)
		{
			if (pNum == 0)													// When pNum is 0 and i > 0, set pMin to i, otherwise, do nothing.
				pMin = i;
			pNum++;															// If number entered is > 0 then raise the amount of positive numbers (intially 0) by 1.
			if (i > pMax)
				pMax = i;													// If number entered is greater than the the current stored maximum positive number (initially 0) then set the stored maximum positive number to the number entered.
			else if (i < pMin)
				pMin = i;													// If number entered is less than the the current stored minimum positive number (initially whatever i was at the begining of the first loop if i was > 0) then set the stored minimum positive number to the number entered.
		}
		else if (i < 0)
		{
			if (nNum == 0)													// When nNum is 0 and i < 0, set nMax to i, otherwise, do nothing.
				nMax = i;
			nNum++;															// If number entered is < 0 then raise the amount of negative numbers (intially 0) by 1.
			if (i > nMax)
				nMax = i;													// If number entered is greater than the the current stored maximum negative number (initially whatever i was at the begining of the first loop if i was < 0) then set the stored maximum negative number to the number entered.
			else if (i < nMin)
				nMin = i;													// If number entered is less than the the current stored minimum negative number (initially 0) then set the stored minimum negative number to the number entered.
		}
	} while (i != 0);														// Repeat the do while loop until the user enters 0. Upon entering 0, all of the variables will stay static where they are and the loop will terminate.

	cout.setf(ios::fixed);													// Set number formatting to fixed.
	cout.setf(ios::showpoint);												// Show trailing zeroes.
	cout.precision(3);														// Set floating point precision to three decimal places.

	if ((pNum != 0) && (nNum != 0))											// Print all values to screen as instructed. Alternate between setting the decimal precision to zero for the number of positive or negative numbers and three for minimums and maximums. 
		cout << "\nThere are " << pNum << " positive values entered, with minimum " << pMin << ", maximum " << pMax << "\nThere are " << nNum << " negative values entered, with minimum " << nMin << ", maximum " << nMax << endl;
	else if ((pNum == 0) && (nNum != 0))
		cout << "\nNo posotive numbers were entered.\nThere are " << nNum << " negative values entered, with minimum " << nMin << ", maximum " << nMax << endl;
	else if ((pNum != 0) && (nNum == 0))
		cout << "\nThere are " << pNum << " positive values entered, with minimum " << pMin << ", maximum " << pMax << ".\nNo negative numbers were entered.\n";
	else if ((pNum == 0) && (nNum == 0))
		cout << "\nNo positive numbers were entered.\n\nNo negative numbers were entered.\n";
	return 0;
}