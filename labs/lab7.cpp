/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 7 & Lab 8
Description: Matrices*/

#include <iostream>

using namespace std;

void symCheck(unsigned int inpt[3][3]), printArr(unsigned int inpt[3][3]), initArr(unsigned int inpt[3][3]);	// Declare three void functions: symmetry checker, print array, and initialize array.

int main()
{
	unsigned int A[3][3], B[3][3], C[3][3];																		// Declare three two dimensional matrices: two for user input and one for storage.
	unsigned short optOne;																						// Also declare two option variables for user choices.
	unsigned char optTwo;

	do {
		cout << "Initialize the coordinates for matrix \"A\"...\n";
			initArr(A);																							// Call the initArr function on matrices A and B to intialize both functions with values
		cout << "\nInitialize the coordinates for matrix \"B\"...\n";											// entered by the user. Then ask the user what of two operations (addittion or multiplication)
			initArr(B);																							// they would like performed on the matrices. If they make an invalid choice, They will be brought back here.
		cout << endl;
		ERROR: cout << "Which of two operations would you like to perform on the two arrays:\n 1. Addition\n 2. Multiplication\nMake your choice: ";
			cin >> optOne;
		switch (optOne)																							// Using a switch operator, perform each operation as requested on the matrices.
		{
			case 1:
				for (unsigned short row = 0; row <= 2; row++)													// Option one is addition. Using for loops to count through individual colomns and rows,
				{																								// at each point in every matrix the following operation is performed: C = A + B.
					for (unsigned short col = 0; col <= 2; col++)
					{
						C[row][col] = A[row][col] + B[row][col];
					}
				}
				break;
			case 2:
				for (unsigned short row = 0; row <= 2; row++)													// Option two is multiplication. Using for loops to count through individual colomns and rows,
				{																								// each point in matrix C is initialized as zero. Additionally, a new for loop is declared to perform
					for (unsigned short col = 0; col <= 2; col++)												// operations successively for each point in all matrices. First it takes a point from matrix C and
					{																							// adds matrix A with a modulated column value times matrix B with a row modulator. The modulator
						C[row][col] = 0;																		// simply adds zero through two as the loop continues to perform the matrix multiplication correctly.
						for (unsigned short mod = 0; mod <= 2; mod++)											// The resulting matrix C at the end of these loops is the result of matrix B multiplied by matix A.
						{
							C[row][col] += (A[row][mod] * B[mod][col]);
						}
					}
				}
				break;
			default:																							// If the user chose an invalid option, they will be notified fo such and asked to try again.
				cout << "\nThat option is invalid! Try again!\n\n";
				goto ERROR;
		}
		cout << "\nThe result of the operation on matrix \"A\"...\n";											
			printArr(A);																						// Calling the printArr function, print matrix A.
		cout << "\nand matrix \"B\"...\n";
			printArr(B);																						// Calling the printArr function, print matrix B.
		cout << "\nis...\n";
			printArr(C);																						// Calling the printArr function, print matrix C.
			symCheck(C);																						// Calling the symCheck function, check if matrix C is symmetrical.
		cout << "\nWould you like to go again? (y,n) ";															// Ask the user if they would like to go again.
			cin >> optTwo;
		if ((optTwo != 'N') && (optTwo != 'n'))																	// If they chose to go again, clear the screen, otherwise wish them a good day and return 0;
			system("CLS");
	} while ((optTwo != 'N') && (optTwo != 'n'));
	cout << "\nHave a good day! :)\n";
	return 0;
}

void symCheck(unsigned int inpt[3][3])
{
	bool symCheck = 1;																							// Assume the function is symmetrical by declaring and initializing a symmetry check variable to 1.
	for (unsigned short row = 0; row <= 2; row++)																// Using for loops to count through individual columns and rows, for each point in the array, check to see if 
	{																											// swapping the row and col coordinates result in the same value. For optimization, we only check this when 
		for (unsigned short col = 0; col <= 2; col++)															// row does not equal col and when symCheck is equl to one, so the logic won't continue running uselessly.
		{																										// If all row and col positions and their swapped counterparts are equal, the function is symmetrical.
			if (row != col)
			{
				if ((inpt[row][col] != inpt[col][row]) && (symCheck == 1))
					symCheck = 0;
			}
		}
	}
	if (symCheck == 1)
		cout << "\nThe resultant matrix \"C\" is symmetrical!\n";
	else
		cout << "\nThe resultant matrix \"C\" is not symmetrical!\n";
}

void printArr(unsigned int inpt[3][3])
{
	for (unsigned short row = 0; row <= 2; row++)																// Using for loops to count through individual columns and rows, print each individual coordinate value of the
	{																											// matrix to the screen in order, ending the line at the end of each row and tabbing between coolumbs for propeer
		for (unsigned short col = 0; col <= 2; col++)															// formatting.
		{
			cout << inpt[row][col] << "\t";
		}
		cout << endl;
	}
}

void initArr(unsigned int inpt[3][3])
{
	for (unsigned short row = 0; row <= 2; row++)																// Using for loops to count through individual columns and rows, ask the user to input a value for each coordinate in
	{																											// matrix sequentially and input that value to that position each loop.
		for (unsigned short col = 0; col <= 2; col++)
		{
			cout << "(" << row + 1 << "," << col + 1 << ")... ";
				cin >> inpt[row][col];
		}
	}
}