/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Assignment 4
Description: Logic Sim*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <bitset>

using namespace std;

string removeLeading(string inpt, bool option);																								// Function declarations for removing useless leading values and a user input error checker.
bool errorCheck(string inptOne, string inptTwo);

int main()
{
	string inptOne, inptTwo;																												// Declare all needed variables with needed datatypes including strings.
	unsigned short optOne, optTwo;
	unsigned char optThree;

	do {
		system("CLS");																														// Clear screen. Everytime the user asks to go again, they will be brought here using a
																																			// do-while loop.
		ERROR:																																// If one of the users inputs are invalid, they will be brought back here.
		cout << "Please enter your first binary value:\t";																					// Ask the user to input two binary values.
			cin >> inptOne;
		cout << "\nPlease enter your second binary value:\t";
			cin >> inptTwo;

		if (errorCheck(inptOne, inptTwo) == true)																							// Function call for error check on both input strings. If the function returns the boolean
		{																																	// value "true" then the screen will clear, the user will be notified that their inputs are
			system("CLS");																													// invalid and they will be booted back to line 20 or the "ERROR:" placeholder to try again.
			cout << "ONE OR BOTH OF YOUR INPUTS ARE INVALID! TRY AGAIN!\n\n";
			goto ERROR;
		}

		do {																																// Ask the user to choose which of seven logical operations they would like to apply to their
			cout << "\nThere are seven logic gates you can apply to these values:\n"														// inputs. If they choose anything but the given options, they will be notified of their error
				 << " 1: AND\n 2: OR\n 3: XOR\n 4: NOT\n 5: NAND\n 6: NOR\n 7: XNOR\n\nMake your choice: ";									// and asked to try again. This validity check is done with a do-while loop.
				cin >> optOne;
			if ((optOne < 1) || (optOne > 7))
				cout << "\nThat option is invalid! Go again!\n";
		} while ((optOne < 1) || (optOne > 7));

		switch (optOne)																														// This is where the logical operations are performed and the results are printed to the screen.
		{																																	// Using a switch statement, depending upon the users chosen operation, the input strings will
			case 1:																															// be displayed along with the symbol for the operation, and the result will be displayed
				cout << endl << setw(69) << inptOne << endl << setw(4) << "AND  " << setw(64) << inptTwo									// underneath with proper formatting. The way this works is by taking each string and creating
					 << endl << "_____________________________________________________________________"										// a bitset or a set of bits from each and performing a bitwise operation on each bitset. The
					 << endl << setw(69) << removeLeading(((bitset<64>(inptOne) & bitset<64>(inptTwo)).to_string()), true) << endl;			// bitwise operation will perform the operation, one bit at a time, on adjacent bits in each
				break;																														// 64-bit bitset. Because the bitset is 64-bit and the size of the bitset cannot be dynamically
			case 2:																															// allocated with a runtime constant, and can only be altered with a compile time constant,
				cout << endl << setw(69) << inptOne << endl << setw(4) << "OR   " << setw(64) << inptTwo									// there will be a lot of leading zeroes most of the time, or, in the case of NOT,
					 << endl << "_____________________________________________________________________"										// a lot of leading ones. To tackle this, instead of simply printing the result of the bitwise
					 << endl << setw(69) << removeLeading(((bitset<64>(inptOne) | bitset<64>(inptTwo)).to_string()), true) << endl;			// operation, we push the result to a string, call the removeLeading function, and apply it to
				break;																														// the resulting string. We then print the result of the funtion and that will give us the
			case 3:																															// desired result. This can only handle 64-bit user inputs.
				cout << endl << setw(69) << inptOne << endl << setw(4) << "XOR  " << setw(64) << inptTwo 
					 << endl << "_____________________________________________________________________"										// Will rewrite this to be more efficient and not require bitset or the remove leading function.
					 << endl << setw(69) << removeLeading(((bitset<64>(inptOne) ^ bitset<64>(inptTwo)).to_string()), true) << endl;
				break;
			case 4:
				cout << endl << setw(4) << "NOT  " << setw(64) << inptOne 
					 << endl << "_____________________________________________________________________"
					 << endl << setw(69) << removeLeading(((~(bitset<64>(inptOne))).to_string()), false) << endl << endl;
				cout << endl << setw(4) << "NOT  " << setw(64) << inptTwo 
					 << endl << "_____________________________________________________________________" 
					 << endl << setw(69) << removeLeading(((~(bitset<64>(inptTwo))).to_string()), false) << endl;
				break;
			case 5:
				cout << endl << setw(69) << inptOne << endl << setw(4) << "NAND " << setw(64) << inptTwo 
					 << endl << "_____________________________________________________________________" 
					 << endl << setw(69) << removeLeading(((~(bitset<64>(inptOne) & bitset<64>(inptTwo))).to_string()), true) << endl;
				break;
			case 6:
				cout << endl << setw(69) << inptOne << endl << setw(4) << "NOR  " << setw(64) << inptTwo 
					 << endl << "_____________________________________________________________________"
					 << endl << setw(69) << removeLeading(((~(bitset<64>(inptOne) | bitset<64>(inptTwo))).to_string()), true) << endl;
				break;
			case 7:
				cout << endl << setw(69) << inptOne << endl << setw(4) << "XNOR " << setw(64) << inptTwo 
					 << endl << "_____________________________________________________________________" 
					 << endl << setw(69) << removeLeading(((~(bitset<64>(inptOne) & bitset<64>(inptTwo))).to_string()), true) << endl;
				break;
		}
		cout << "\nDo you want to go again? (y,n) \t";																						// This entire main program was a do-whiel loop, so the user can have the choice of doing the
			cin >> optThree;																												// program again at the end.
	} while (optThree == 'y'); 
	cout << "\nHave a great day! :)\n"; 
	return 0;
}

string removeLeading(string inpt, bool option)																								// Function header for removing useless leading values, taking one input string and a boolean value.
{																																			// The boolean value is used to denote if the leading values will be zeroes or not. A local variable
	unsigned short i = 0;																													// "i" is declared and intitialized with a value of zero. This variable will be used to determine
	if (option == true)																														// how far into the string, from position zero, we should delete values. If the leading values will
	{																																		// be zeroes, then, starting from position zero, we determine if the value in the position is zero.
		while (inpt[i] == '0')																												// If true, one is added to the variable "i". This repeats until we reach a position in the input
		{																																	// string where the value is one and then the amount of digits from position zero to position "i"
			i++;																															// are erased. Else the leading values will be ones, then we remove the ones instead of the zeroes
		}																																	// in the same way. The result is returned as an altered inpt.
		inpt.erase(0, i);
	}																																		// Will most likely rewrite this to count digits using inpt.length instead of using for loops.
	else
	{
		while (inpt[i] == '1')
		{
			i++;
		}
		inpt.erase(0, i);
	}
	return inpt;
}

bool errorCheck(string inptOne, string inptTwo)																								// Function header for performing an error check on two input strings. The local boolean variable "error"
{																																			// is declared and initialized with the value "false". Two seperate for loops scan each string input to check
	bool error = false;																														// if each position in the string is either a "0" or a "1". If this holds true then the "error"
	for (unsigned short i = 0; i <= inptOne.length() - 1; i++)																				// variable will stay "false" and be returned as such. Else, the "error" variable is returned as
	{																																		// "true".
		if ((inptOne[i] != '1') && (inptOne[i] != '0'))
			error = true;
	}
	for (unsigned short i = 0; i <= inptTwo.length() - 1; i++)
	{
		if ((inptTwo[i] != '1') && (inptTwo[i] != '0'))
			error = true;
	}
	return error;
}