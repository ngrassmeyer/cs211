/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Assignment 4
Description: Logic Sim and Figure Print*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int optOne, optTwo;
	char optThree;

	do 
	{
		do {
			system("CLS");

			cout << "There are two programs to choose from:\n 1: Logic Simulator\n 2. Figure Drawing\n\nMake your choice: ";
				cin >> optTwo;

			if ((optTwo < 1) || (optTwo > 2))
				cout << "\nThat option is invalid! Go again!\n";

		} while ((optTwo < 1) || (optTwo > 2));

		switch (optTwo) 
		{
			case 1:
				system("CLS");

				unsigned long long int inptOne, inptTwo, div, dig;																		// Declare all variables as unsigned long long int. We are expecting very large numbers, but never negative numbers.
				ERROR: dig = 0;																											// If the user enters incorrect values, then they will be brought back here and the number of max digits reset.

				cout << "Please enter your first binary value: ";																		// Ask the user to input their first and second binary values.
					cin >> inptOne;
				cout << "\nPlease enter your second binary value: ";
					cin >> inptTwo;

				for (unsigned long long int i = (inptOne + inptTwo); i != 0; i /= 10)													// This loop is designed to count how many digits the largest binary value entered has. THis is done by adding both											
				{																														// inputs together. Because these are binary, adding them will never add another digit, so counting the digits of
					dig++;																												// the added numbers will always give the amount of digits of the largest number without extra logic. Every loop it
				}																														// will divide the sum by ten and add one to the count until the division shows zero.
				div = (pow(10, (dig - 1)));																								// This is the intitial divisor for the loop to do the logic simulation.

				do {
					cout << "\nThere are seven logic gates you can apply to these values:\n 1: AND\n 2: OR\n 3: XOR\n 4: NOT\n 5: NAND\n 6: NOR\n 7: XNOR\n\nMake your choice: ";
						cin >> optOne;																									// Ask the user which logic gate they would like to use on the values. There are only seven possibilities. If they
																																		// choose anything else, spit and error and tell them to try again with a do while loop.
					if ((optOne < 1) || (optOne > 7))
						cout << "\nThat option is invalid! Go again!\n";

				} while ((optOne < 1) || (optOne > 7));

				if (optOne != 4)
				{
					cout << "\nThe value of\n\n" << setw(24) << inptOne << "\n";														// Begin printing results to the screen pertaining to the option the user specified, except option four, or the NOT gate.

					switch (optOne)
					{
						case 1:
							cout << "AND" << setw(21) << inptTwo << "\n------------------------\n" << setw(14);
							break;

						case 2:
							cout << "OR" << setw(22) << inptTwo << "\n------------------------\n" << setw(14);
							break;

						case 3:
							cout << "XOR" << setw(21) << inptTwo << "\n------------------------\n" << setw(14);
							break;

						case 5:
							cout << "NAND" << setw(20) << inptTwo << "\n------------------------\n" << setw(14);
							break;

						case 6:
							cout << "NOR" << setw(21) << inptTwo << "\n------------------------\n" << setw(14);
							break;

						case 7:
							cout << "XNOR" << setw(20) << inptTwo << "\n------------------------\n" << setw(14);
							break;
					}

					for (unsigned long long int i = 1; i <= dig; i++)																	// This for loop is designed to do several operations that culminate in the final logical operation result printed to
					{																													// the screen. First it checks to see if the inputs by the user are valid each time the loop runs. If at any point 
						if ((((inptOne / div) != 1) && ((inptOne / div) != 0)) || (((inptTwo / div) != 1) && ((inptTwo / div) != 0)))	// either of the inputs divided by 10^n is not 1 or 0, that number is not a binary number, and is therefore invalid.
						{																												// If they are not valid, the user will be booted back to the begining. The program has already started the process of
							system("CLS");																								// writing the final result to the screen without doing any actual logic. So, according to the initial option entered
																																		// by the user, except option 4, the most significant to the least significant digit will be printed to the screen
							cout << "AN ERROR OCCURRED! This is most likely due to invalid inputs. Try again!\n\n";						// sequentially. This is done by taking the logic of each input divided by 10^(digcount-1) and printing that result to
							goto ERROR;																									// the screen each loop. Each loop the divisor is divided by ten and the most significant digits are both discarded
						}																												// by taking the remainder of both inputs divided by 10^(digcount-1).

						switch (optOne)
						{
							case 1:																										// Loop Example...
								cout << ((inptOne / div) && (inptTwo / div));															// Loop Start: ((1111 / 10^3) AND (101 / 10^3)) -> (( 1 ) AND ( 0 )) -> 0 :Loop End
								break;																									// Loop Start: ((111 / 10^2) AND (101 / 10^2)) -> (( 1 ) AND ( 1 )) -> 1 :Loop End
																																		// Loop Start: ((11 / 10^1) AND (01 / 10^1)) -> (( 1 ) AND ( 0 )) -> 0 :Loop End
							case 2:																										// Loop Start: ((1 / 10^0) AND (1 / 10^0)) -> (( 1 ) AND ( 1 )) -> 1 :Loop End
								cout << ((inptOne / div) || (inptTwo / div));															// Output would be... 0101!
								break;

							case 3:
								if ((inptOne / div) != (inptTwo / div))
									cout << ((inptOne / div) || (inptTwo / div));
								else
									cout << ((inptOne / div) - (inptTwo / div));
								break;

							case 5:
								cout << !((inptOne / div) && (inptTwo / div));
								break;

							case 6:
								cout << !((inptOne / div) || (inptTwo / div));
								break;

							case 7:
								if ((inptOne / div) != (inptTwo / div))
									cout << !((inptOne / div) || (inptTwo / div));
								else
									cout << !((inptOne / div) - (inptTwo / div));
								break;
						}

						inptOne %= div;
						inptTwo %= div;
						div /= 10;
					}
				}

				else
				{
					cout << "\nThe value of\n\n" << "NOT" << setw(21) << inptOne << "\n------------------------\n" << setw(16);			// In the case of option four, or the NOT gate, we want a slightly different program. NOT is a unary operation and not a
																																		// binary operation, meaning it only has one input. This loop still does logic on the input and prints it to the screen
					for (unsigned long long int i = 1; i <= dig; i++)																	// sequentially, but it only takes input one and makes each digit from most significant to least significant opposite.
					{																													// This loop also checks to see if the inputs are valid or not.
						if ((((inptOne / div) != 1) && ((inptOne / div) != 0)))
						{
							system("CLS");

							cout << "AN ERROR OCCURRED!This is most likely due to invalid inputs. Try again!\n\n";
							goto ERROR;
						}

						cout << !(inptOne / div);

						inptOne %= div;
						div /= 10;
					}

					cout << "\n\nThe value of\n\n" << "NOT" << setw(21) << inptTwo << "\n------------------------\n" << setw(16);

					div = (pow(10, (dig - 1)));																							// The last loop changed the divisor, so, to display the inverse of the second input, it must be reset before the next loop.

					for (unsigned long long int i = 1; i <= dig; i++)																	// This loop works the same as the last, but for the second input instead.
					{
						if (((inptTwo / div) != 1) && ((inptTwo / div) != 0))
						{
							system("CLS");

							cout << "AN ERROR OCCURRED! This is most likely due to invalid inputs. Try again!\n\n";
							goto ERROR;
						}

						cout << !(inptTwo / div);

						inptTwo %= div;
						div /= 10;
					}
				}
				break;

			case 2:
				double x, y;

				system("CLS");
				{
					for (y = 3; y >= -2; y--)																							// Y - Coordinates Defines Range
					{
						for (x = -3; x <= 4; x++)																						// X - Coordinates Defines Domain
						{
							if ((y >= abs(x)) || (x - y == 1) && (y >= 0))																// Algebraic Expression Regarding X and Y To Print Shape To Screen... In this case: y >= |x| or { y >= 0, y = x - 1
								cout << "x";																							// Each time the expression is satisfied, print x to the screen, otherwise print a space.

							else
								cout << " ";
						}

						cout << endl;																									// Each time the horizontal row has been fulfilled and we have reached the end of the domain in the x-coordinate, drop down a line in the range.
					}

					for (y = 3; y >= -3; y--)																							// Same concept applies to the next two loops except with two different expressions.
					{
						for (x = -3; x <= 3; x++)
						{
							if (abs(x) + abs(y) == 3)
								cout << "x";

							else
								cout << " ";
						}

						cout << endl;
					}

					cout << endl << endl;

					for (y = 3; y >= -3; y--)
					{
						for (x = -3; x <= 3; x++)
						{
							if (abs(y) == abs(x))
								cout << "x";

							else
								cout << " ";
						}

						cout << endl;
					}
				}
				break;
		} 

		cout << "\n\nWould you like to go again? (y,n) ";																				// Ask the user if they would liek to run the program again. If so, bring them back to the beginning of the do while loop. If not, wish them good day.
		cin >> optThree;
	} while (optThree == 'y'); 
	
	cout << "\nHave a great day! :)\n"; 
	return 0;
}