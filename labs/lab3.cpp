/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 3
Description: Looping*/

#include <iostream>

using namespace std;

int main()
{
	int opt1, num, lim;																								// Declare the needed variables including the variable that we will use 
	char opt2;																										// at the end to ask the user if they would like ot run the program again.

	do {																											// Use a do while loop to ask the user if they'd like to repeat the program.
		cout << "Welcome to Numerical World! Here are the available programs:\n 1. Multiplication Table\n 2. Print Only Odd\n 3. Print Only Even\n 4. Print All Natural\n\nEnter your choice: ";
			cin >> opt1;																							// Display possible options to the user and ask them to make a choice.
		switch (opt1)																								// Use a switch function to choose the program based on cases according to the
		{																											// users decision.
			case 1:																									// This program will display a mmultiplication table. It will ask the user the
				cout << "\nEnter the number you would like the multiplication table of: ";							// number they would like the multiplication table of and it will ask the user
					cin >> num;																						// the maximum number the would like to multiply said number by. The program will
				cout << "\nEnter the maximum number you would like to multiply your input by in the table: ";		// then print a multiplication table as instructed using a for loop with the
					cin >> lim;																						// restrictions in the domain specified by the user.
				cout << endl;
				for (int i = 1; i <= lim; i++)
				{
					cout << num << " * " << i << " = " << num * i << "\t";
				}
				break;
			case 2:																									// This program will list odd numbers. It will ask the user the maximum number they
				cout << "\nEnter the maximum number you would like printed to the screen: ";						// would like printed to the screen. It will them display all odd numbers from zero
					cin >> lim;																						// to the limit specified by the user using the limit as a restriction in the domain
				cout << endl;																						// of a for loop and whether the remainder when each number in that list is divided
				for (int i = 1; i <= lim; i++)																		// two is zero or not. If the remainder is zero, it is even and therefore it will not
				{																									// print. If the remainder is not zero, is is odd will be printed in the list.
					if ((i % 2) != 0)
						cout << i << "\t";
				}
				break;
			case 3:
				cout << "\nEnter the maximum number you would like printed to the screen: ";						// This program is the exact same as the last program, except instead of printing only
					cin >> lim;																						// odd numbers, it will print only even numbers this time. Using the same technique,
				cout << endl;																						// it will test if the remainder of each each number in that list when divided by
				for (int i = 1; i <= lim; i++)																		// two is zero. If the remainder is zero, then it is zero and will print to the screen.
				{
					if ((i % 2) == 0)
						cout << i << "\t";
				}
				break;
			case 4:
			{
				/*cout << "\nEnter the maximum number you would like printed to the screen: ";
					cin >> lim;
				cout << endl;
				for (int i = 1; i <= lim; i++)
				{
					cout << i << "\t";
				}
				break;*/
				int i = 1;																							// This program is the same as the last two, expect there is no restriction on the
																													// list of numbers being printed. In other words, all natural numbers in the domain
				cout << "\nEnter the maximum number you would like printed to the screen: ";						// of the loop up to a limit specified by the user will be printed to the screen.
					cin >> lim;																						// A major difference here is that instead of using a for loop, a while loop is
				cout << endl;																						// being employed. It is the same concept, yet less efficient. The variable i is
				while (i <= lim)																					// declared doutside of the loop and the limit is expressed after the while keyword.
				{
					cout << i << "\t";
					i++;
				}
				break;
			}
			default:
				cout << "\nThat is an invalid option!\n";															// Here we assume the possibility of an invalid input and ask the user if they would
				break;																								// like to run the prgram again with the end of the do while loop. If the user says they
		} cout << "\nWould you like to go again? (y,n) "; cin >> opt2;												// would not like to contunue the program with send the user off and return 0 to the main
	} while (opt2 == 'y'); cout << "\nThank you for participating in Numerical World! :)\n\n"; return 0;			// function. Otherwise, the user will be brought back to the begining of the do while loop.
}