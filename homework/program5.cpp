/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Homework 5
Description: Vending Machine*/

#include <iostream>
#include <iomanip>

using namespace std;

unsigned short menu(), acceptMoney(unsigned short price), computeChange(unsigned short inserted, unsigned short price);							// Declare all necessary functions to display vending machine menu, accept money, and compute change.
void returnCoin(unsigned short change);																											// Declare a void function for calculating and displaying the least amount of coins to return from change.

const unsigned short PENNY = 1, NICKEL = 5, DIME = 10, QUARTER = 25, DOLLAR = 100;																// Declare and intialize the values for all the accepted coins in the vending machine.

int main()
{
	unsigned short price, inserted;																												// Declare all needed variables such as total price, total inserted amount, and user option.
	unsigned char optOne;

	cout << "Welcome to the snack vending machine\n";

	do {
		price = menu();																															// Display the available vending machine items and ask for user selection and return and store the total price by calling the menu function.
		inserted = acceptMoney(price);																											// Ask the user to input change to pay for item and return how much they entered by calling the accept money function.
		returnCoin(computeChange(inserted, price));																								// Output the least amount of coins ncessary to make up the difference in how much the user entered and how much they were to pay.
		cout << "\nTotal change:" << setw(11) << computeChange(inserted, price) << " CENTS\n\nWould you care to make another purchase (Y/N): ";	// This is done with a function call to the return coin function. Confirm with the user their total change.
			cin >> optOne;																														// Ask the user if they would like to make another purchase with the do while loop. If they do not wish to make another purchase, wish them well.
	} while ((optOne == 'Y') || (optOne == 'y'));
	cout << "\nThank you and enjoy your purchase!\n";
	return 0;
}

unsigned short menu()																															// Function header. Below is the function body. Both are part of the function definition.
{
	unsigned char select;																														// Declare local variables for user selection and local variables for snack item prices and initialize those prices.
	unsigned short P = 125, S = 135, T = 95, C = 150, B = 175, N = 140, price = 0;

	cout << "\nAvailable snacks to choose from:\n" << setw(23) << "P - Potato Chips\t $" << (P / 100) << "." << (P % 100)						// List all available snack items and their prices with proper formatting.
		 << "\n" << setw(23) << "S - Snickers Bar\t $" << (S / 100) << "." << (S % 100)
		 << "\n" << setw(19) << "T - Pop Tart\t $" << (T / 100) << "." << (T % 100)
		 << "\n" << setw(19) << "C - Cookies\t\t $" << (C / 100) << "." << (C % 100)
		 << "\n" << setw(19) << "B - Brownie\t\t $" << (B / 100) << "." << (B % 100)
		 << "\n" << setw(16) << "N - Nuts\t\t $" << (N / 100) << "." << (N % 100) << endl;

	INVALID:																																	// If the user makes an imporper selection, they will be brought back here and asked to try again.
	cout << "Please enter the letter labeling your snack selection: ";																			// Ask the suer for their snack selection and store the choice in the user selection variable.
		cin >> select;

	if ((select == 'P') || (select == 'p'))																										// Depending on the user selection, using an else if ladder, determine the user's total charge.
	{
		price = P;
	}
	else if ((select == 'S') || (select == 's'))
	{
		price = S;
	}
	else if ((select == 'T') || (select == 't'))
	{
		price = T;
	}
	else if ((select == 'C') || (select == 'c'))
	{
		price = C;
	}
	else if ((select == 'B') || (select == 'b'))
	{
		price = B;
	}
	else if ((select == 'N') || (select == 'n'))
	{
		price = N;
	}
	else
	{
		cout << "Invalid selection!\n\n";																										// If the user's choice was invalid, let them know, then boot them back to the begining to try again.
		goto INVALID;
	}
	return price;																																// After a succesful function run, the total price of the item selected by the user shall be returned.
}

unsigned short acceptMoney(unsigned short price)																								// Function header. Below is the function body. Both are part of the function definition.
{
	unsigned int inserted = 0;																													// Declare local variables for total inserted and for a coin.
	unsigned char coin;
	cout << "\nMoney accepted by the machine:\n\tP - PENNY\n\tN - Nickel\n\tD - Dime\n\tQ - Quarter\n\t$ - Dollar\n";							// List the currencies accepted by the vending machine.

	while (inserted < price)																													// Ask the user to input coins until what they have inserted is either equal to or greater than
	{																																			// their slected snack item.
		INVALID: cout << "\nYour selected snack item cost:" << setw(4) << price << " CENTS\nYour total inserted:\t" << setw(10) << inserted << " CENTS\nInsert amount (enter letter of choice): ";
			cin >> coin;
		if ((coin == 'P') || (coin == 'p'))
		{
			inserted += PENNY;
		}
		else if ((coin == 'N') || (coin == 'n'))
		{
			inserted += NICKEL;
		}
		else if ((coin == 'D') || (coin == 'd'))
		{
			inserted += DIME;
		}
		else if ((coin == 'Q') || (coin == 'q'))
		{
			inserted += QUARTER;
		}
		else if (coin == '$')
		{
			inserted += DOLLAR;
		}
		else
		{
			cout << endl << coin << " is not recognized as a coin.\n";																			// If the user inputs a coin that is not recognized, notify them, and have them try again.
			goto INVALID;
		}
	}
	cout << "\nYour total inserted:" << setw(4) << inserted << " CENTS\n\nDispensing change:";													// Confirm the total inserted to the user and return that amount.
	return inserted;
}

unsigned short computeChange(unsigned short inserted, unsigned short price)																		// Function header. Below is the function body. Both are part of the function definition.
{
	return (inserted - price);																													// Return result of simplechange calculation by subtracting total inserted from total snack item price.
}

void returnCoin(unsigned short change)																											// Function header. Below is the function body. Both are part of the function definition.
{
	unsigned short coin = 0;																													// Declare local variable for coin number.
	while ((change / 25) != 0)																													// For each coin check to see if the total change divided by that coin value does not equal zero.
	{																																			// This means that there is at least one of that coin to be dispensed. Add one to the coin number
		coin++;																																	// and subttract that coin value from the total change owed to the user. Do this iteratively until
		change -= 25;																															// the total change divided by that coin value is zero, meaning no more of that coin needs to be dispensed.
	}																																			// After that loop has counted how many of that coin will be dispensed, we do a check. If the number
	if (coin > 0)																																// of that coin to be dispensed is greater than zero, print how many of said coin will be dispensed accounting
	{																																			// for plurals. If the amount of that coin to be dispensed is zero,then print nothing and move on to the
		cout << setw(6) << coin << " QUARTER";																									// next coin. Do the same thing for all other coins from quarters to pennies. This function is just meant to
		if (coin > 1)																															// cout as a void function, so there will be no reurn value.
			cout << "S";
		coin = 0;
		cout << "\n\t\t  ";
	}
	while ((change / 10) != 0)
	{
		coin++;
		change -= 10;
	}
	if (coin > 0)
	{
		cout << setw(6) << coin << " DIME";
		if (coin > 1)
			cout << "S";
		coin = 0;
		cout << "\n\t\t  ";
	}
	while ((change / 5) != 0)
	{
		coin++;
		change -= 5;
	}
	if (coin > 0)
	{
		cout << setw(6) << coin << " NICKEL";
		if (coin > 1)
			cout << "S";
		coin = 0;
		cout << "\n\t\t  ";
	}
	while ((change / 1) != 0)
	{
		coin++;
		change -= 1;
	}
	if (coin > 0)
	{
		if (coin == 1)
			cout << setw(6) << coin << " PENNY\n";
		else
			cout << setw(6) << coin << " PENNIES\n";
		coin = 0;
	}
}