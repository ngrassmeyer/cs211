/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Homework 2
Description: Number Logger*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float i, pNum = 0, nNum = 0, pMax = 0, pMin = 0, nMax = 0, nMin = 0; //Initialize all the variables and declare all equal to zero except the user input variable

	cout << "Entering 0 will terminate the sequence of input values.\n";

	do { //Using a do while loop, ask the user for the first number. Upon receiving the number, decide whether it is > or < 0.
		cout << "Enter a number: "; 
			cin >> i;
		
		if ((pNum == 0) && (i > 0)) //This is simply to make it possible to find the minimums and maximums without having to set pMin and nMax to infinities. Although, if it was allowed, maybe header file <limits> would be applicable, but this is still probably more optimized.
			pMin = i; //When pNum is 0 and i > 0, set pMin to i, otherwise, do nothing.
		if ((nNum == 0) && (i < 0))
			nMax = i; //When nNum is 0 and i < 0, set nMax to i, otherwise, do nothing.
	
		if (i > 0)
		{
			pNum = pNum++; //If number entered is > 0 then raise the amount of positive numbers (intially 0) by 1.
			if (i > pMax)
				pMax = i; //If number entered is greater than the the current stored maximum positive number (initially 0) then set the stored maximum positive number to the number entered.
			if (i < pMin)
				pMin = i; //If number entered is less than the the current stored minimum positive number (initially whatever i was at the begining of the first loop if i was > 0) then set the stored minimum positive number to the number entered.
		}
		if (i < 0)
		{
			nNum = nNum++; //If number entered is < 0 then raise the amount of negative numbers (intially 0) by 1.
			if (i > nMax)
				nMax = i; //If number entered is greater than the the current stored maximum negative number (initially whatever i was at the begining of the first loop if i was < 0) then set the stored maximum negative number to the number entered.
			if (i < nMin)
				nMin = i; //If number entered is less than the the current stored minimum negative number (initially 0) then set the stored minimum negative number to the number entered.
		}	
	} while (i != 0); //Repeat the do while loop until the user enters 0. Upon entering 0, all of the variables will stay static where they are and the loop will terminate.

	cout.setf(ios::fixed); //Set number formatting to fixed.

	if ((pNum != 0) && (nNum != 0)) //Print all values to screen as instructed. Alternate between setting the decimal precision to zero for the number of positive or negative numbers and three for minimums and maximums. 
		cout << "There are " << setprecision(0) << pNum << " positive values entered, with minimum " << setprecision(3) << pMin << ", maximum " << pMax << "\nThere are " << setprecision(0) << nNum << " negative values entered, with minimum " << setprecision(3) << nMin << ", maximum " << nMax << endl;
	else if ((pNum == 0) && (nNum != 0))
		cout << "\nNo posotive numbers were entered.\nThere are " << setprecision(0) << nNum << " negative values entered, with minimum " << setprecision(3) << nMin << ", maximum " << nMax << endl;
	else if ((pNum != 0) && (nNum == 0))
		cout << "\nThere are " << setprecision(0) << pNum << " positive values entered, with minimum " << setprecision(3) << pMin << ", maximum " << pMax << ".\nNo negative numbers were entered.\n";
	else if ((pNum == 0) && (nNum == 0))
		cout << "\nNo positive numbers were entered.\n\nNo negative numbers were entered.\n";

	return 0;
}