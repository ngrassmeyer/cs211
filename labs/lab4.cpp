/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 4
Description: Practice*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

double	add(double a, double b),															// Declare functions for addition, subtraction, division, multiplication, and modular division.
		sub(double a, double b), 
		div(double a, double b), 
		mult(double a, double b), 
		mdiv(int a, int b);

int main()																					// Main function declaration and definition.
{
	double a, b;																			// Declare all necessary variables in main and ask the user to input the values for
	int optOne;																				// said variables.
	char optTwo;

	do {
		system("CLS");
		cout << "Enter a value for a: ";
			cin >> a;
		cout << "\nEnter a value for b: ";
			cin >> b;
		cout << "\nWhat would you like to do?\n 1. (a + b)\n 2. (a - b)\n 3. (a * b)\n 4. (a / b)\n 5. Remainder of (a / b)\n\nMake your choice: ";
			cin >> optOne;																	// Ask the user what arithmetic operation they would like to apply to the values.

		switch (optOne)
		{
			case 1:
			{
				double result = add(a, b);													// Funcion call and store return value to variable result. Datatypes match with the
				cout << "\nThe value of " << a << " + " << b << " is " << result << ".\n";	// storage variable and the arguments in the function.
				break;
			}
			case 2:
			{
				double result = sub(a, b);
				cout << "\nThe value of " << a << " - " << b << " is " << result << ".\n";
				break;
			}
			case 3:
			{
				double result = mult(a, b);
				cout << "\nThe value of " << a << " * " << b << " is " << result << ".\n";
				break;
			}
			case 4:
			{
				double result = div(a, b);
				cout << "\nThe value of " << a << " / " << b << " is " << result << ".\n";
				break;
			}	
			case 5:
			{
				int result = mdiv(a, b);
				cout << "\nThe remainder of " << a << " / " << b << " is " << result << ".\n";
				break;
			}
		} cout << "\nWould you like to go again? (y,n) "; cin >> optTwo; cout << endl;
	} while (optTwo == 'y'); cout << "Have a great day!\n"; return 0;
}

double add(double a, double b)																// Function definition. All variables in function are local and therefore the function
{																							// will output only a number given the inputs in the main funtion. This function will
	return (a + b);																			// calculate the total price of the items with respect to tax and return that with
}																							

double sub(double a, double b)
{
	return (a - b);
}

double mult(double a, double b)
{
	return (a * b);
}

double div(double a, double b)
{
	return (a / b);
}
double mdiv(int a, int b)
{
	return (a % b);
}

/*double calculateTotalCost(int quantity, double price);								// Function declaration.

int main()																				// Main function declaration and definition.
{
	int quantity; double price, bill;													// Declare al necessary variables in main and ask the user to input the values for
																						// said variables.
	cout << "How many of the item are you purchasing?\t\t";								
		cin >> quantity;
	cout << "\nWhat is the cost of the item you are purchasing?\t$";
		cin >> price;

	bill = calculateTotalCost(quantity, price);											// Funcion call and return value output to variable bill. Datatypes match with the
																						// storage variable and the arguments in the function.
	//cout.precision(2);
	cout << "\nThe total cost of your purchase rounded will be $" << bill << ".\n";		// Output the total cost of products to the user and terminate the main function
	return 0;																			// sucessfully with return 0.
}

double calculateTotalCost(int quantity, double price)									// Function definition. All variables in function are local and therefore the function
{																						// will output only a number given the inputs in the main funtion. This function will
	double subtotal = (quantity * price);												// calculate the total price of the items with respect to tax and return that with
	double total = (subtotal + (subtotal * 0.07));										// respect to the arguments defined in the function call in main.
	return total;
}

int main()
{
	int y, x;
	int optOne, rem, res = 0;
	char optTwo;

	do {
		cout << "\nThere are three programs you can choose from:\n 1. Figure Print\n 2. Palindrome Test\n 3. Armstrong Number Test\n\nMake your choice: ";
			cin >> optOne;
		switch (optOne)
		{
			case 1:
				for (y = 25; y >= -25; y--)
				{
					for (x = 50; x >= -50; x--)
					{
						if (abs(y) == abs(x))
							cout << "x";
						else
							cout << " ";
					}
					cout << endl;
				}
				break;
			case 2:
				cout << "\nEnter a value: ";
					cin >> y;
				x = y;
				while (y != 0)
				{
					rem = (y % 10);
					res = ((res * 10) + rem);
					y = (y / 10);
				}
				if (res == x)
					cout << "\nThat is a palindrome number!\n";
				else
					cout << "\nThat is not a palindrome number!\n";
				break;
			case 3:
				cout << "\nEnter a value: ";
					cin >> y;
				x = y;
				while (y != 0)
				{
					rem = (y % 10);
					res = (res + (rem * rem * rem));
					y = (y / 10);
				}
				if (res == x)
					cout << "\nThat is an armstrong number!\n";
				else
					cout << "\nThat is not an armstrong number!\n";
				break;
		}
		cout << "\nDo you want to go again? (y,n) ";
				cin >> optTwo;
	} while (optTwo == 'y'); return 0;
}*/