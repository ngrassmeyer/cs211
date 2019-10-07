/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 4
Description: Simple Branching Statement*/

#include <iostream>

using namespace std;

int main()
{
	int grossPay,
		hourlyRate,
		hoursWorked;

	cout << "Enter the hourly rate: $";
		cin >> hourlyRate;
	cout << "\nEnter the hours worked rounded to the nearest hour: ";
		cin >> hoursWorked;

	if (hoursWorked > 40)
	else if (hoursWorked < 40)
		grossPay = hoursWorked * hourlyRate;
	else if (168 > hoursWorked > 40)
		grossPay = 40 * hourlyRate + hourlyRate * 1.5 * (hoursWorked - 40);
	else

	cout << "\nGross pay: $" << grossPay <<endl;

	return 0;
}