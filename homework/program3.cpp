/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Homework 3
Description: A Loan With Interest*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float loanAmt, intRt, monthPay, monthInt, monthPrin, yearInt, yearPrin;						// Declare all needed variables.

	cout << "Enter amount of loan:\t";															// Ask the user for their loan amount and store that amount
		cin >> loanAmt;
	cout << "Enter interest rate:\t";															// Ask the user for the percentage interest rate applied to
		cin >> intRt;																			// their loan annually.																	
	cout << "Enter monthly payment:\t";															// Ask the user what they pay monthly and store that value.
		cin >> monthPay;
	cout.setf(ios::fixed);																		// Set the number formatting to fixed and the decimal
	cout.precision(2);																			// precision to two.

	for (int i = 1; i <= 3; i++)																// Create a for loop that will perform some logic for
	{																							// each year of calculation.
		yearInt = 0;																			// Reset annual principal amd interest totals each year.
		yearPrin = 0;
		cout << "\nYear " << i << "\t\tInterest\tPrincipal\n\t---\t--------\t---------\n";		// Print table.
		for (int j = 1; j <= 12; j++)															// Create a for loop that will perform some logic for each
		{																						// month out of each year.
			monthInt = ((loanAmt * (intRt * 0.01)) / 12.00);									// The logic in this for loop does a number of things including
			monthPrin = (monthPay - monthInt);													// calculating monthly interest and monthly principal. If
			if (monthInt < 0)																	// the interest for any month is less than zero, the bank
			{																					// would be paying the user, so the monthly principal and 
				monthPrin = 0;																	// interest are set to zero in this case. Each month the monthly
				monthInt = 0;																	// interest and principal are added to the annual interest and
			}																					// principal respectively. Each month the monthly principal is
			yearInt += monthInt;																// subtracted from the total loan amount.
			yearPrin += monthPrin;
			loanAmt -= monthPrin;
			cout << "\t" << setw(2) << j << ":\t" << setw(8) << monthInt << "\t" << setw(9) << monthPrin << endl;	// Each month print the month, monthly interest, and the monthly principal.
		}																											// Each year print the year, the annual total interest and principal, and the remaining balance.
		cout << "\t---\t--------\t---------\nYear " << i << " totals:\t" << setw(8) << yearInt << "\t" << setw(9) << yearPrin <<"\nRemaining balance at year end:\t" << setw(9) << loanAmt << endl;
	}
		return 0;
}