#include <iostream>			// These are preprocessor directives used to pull
#include <iomanip>			// header files for keywords in your code.
#include <cmath>

using namespace std;		// Specifying that we are using the std namespace. This is so we dont have to type std:: everytime we want to use
							// an std keyword because we've already specified we will be using that namespace at the start.

const float PI = 3.14159;

int main()					// Every c++ program must have a function. This must be datatype int.
{
	short optOne;					// Here we are declaring the variables we will be using in our program. We do not need to initialize them just yet. 
	char optTwo;					// We will do that after asking the user to input the values for each variable. We are using different
	long double inptOne, inptTwo, inptThree;	// datatypes here for different applications to make our code more optimized.

	cout <<					// cout is short for character output and will print anything within parentheses, variables, math with variaables, and more.																																					
R"(_____/\\\\\\\\\\\_______________________________________/\\\___________________________/\\\\\\\\\\\\\\\__________________________________________        
 ___/\\\/////////\\\____________________________________\/\\\__________________________\///////\\\/////___________________________________________       
  __\//\\\______\///______/\\\___________________________\/\\\_____/\\\__/\\\_________________\/\\\________/\\\____________________________________      
   ___\////\\\__________/\\\\\\\\\\\__/\\\____/\\\________\/\\\____\//\\\/\\\__________________\/\\\_______\///_____/\\\\\__/\\\\\_______/\\\\\\\\__     
    ______\////\\\______\////\\\////__\/\\\___\/\\\___/\\\\\\\\\_____\//\\\\\___________________\/\\\________/\\\__/\\\///\\\\\///\\\___/\\\/////\\\_    
     _________\////\\\______\/\\\______\/\\\___\/\\\__/\\\////\\\______\//\\\____________________\/\\\_______\/\\\_\/\\\_\//\\\__\/\\\__/\\\\\\\\\\\__   
      __/\\\______\//\\\_____\/\\\_/\\__\/\\\___\/\\\_\/\\\__\/\\\___/\	_/\\\_____________________\/\\\_______\/\\\_\/\\\__\/\\\__\/\\\_\//\\///////___  
       _\///\\\\\\\\\\\/______\//\\\\\___\//\\\\\\\\\__\//\\\\\\\/\\_\//\\\\/______________________\/\\\_______\/\\\_\/\\\__\/\\\__\/\\\__\//\\\\\\\\\\_ 
        ___\///////////_________\/////_____\/////////____\///////\//___\////________________________\///________\///__\///___\///___\///____\//////////__)";

	do {
		do {
			cout << "\n\nThere are seven possible programs:\n 1. Datatype Sizes\n 2. Logic Gates\n 3. List Numbers\n 4. Pythagorean Theorem\n 5. Quadratic Formula\n 6. Number Formatting\n 7. Area of Circle\n\nMake your choice: "; //Ask the user for the value of optOne.
				cin >> optOne;		//After asking the user for the value of optOne, the value the user enter next can be ushed to the variable optOne using cin.
		if ((optOne < 1) || (optOne > 7))
			cout << "\nThat option is invalid! Go again!\n";
		} while ((optOne < 1) || (optOne > 7));

			switch (optOne)
			{
			case 1:
				cout << "\nSize of char : " << sizeof(char) << " byte" << endl				// This will list the size that each possibe
					<< "Size of bool is " << sizeof(bool) << " byte" << endl				// datatype in c++ takes up in the memory.
					<< "Size of short is " << sizeof(short) << " byte" << endl
					<< "Size of int is " << sizeof(int) << " byte" << endl
					<< "Size of long is " << sizeof(long) << " byte" << endl
					<< "Size of long long is " << sizeof(long long) << " byte" << endl
					<< "Size of float is " << sizeof(float) << " byte" << endl
					<< "Size of double is " << sizeof(double) << " byte" << endl
					<< "Size of long double is " << sizeof(long double) << " byte" << endl;
				break;
			case 2:
				do {
					cout << "\nPlease enter your first variable (1,0): ";
						cin >> inptOne;
					cout << "\nPlease enter your second variable (1,0): ";
						cin >> inptTwo;
				if (((inptOne != 1) && (inptOne != 0)) || ((inptTwo != 1) && (inptTwo != 0)))
					cout << "\nOne or both of your inputs are invalid! Go again!\n";
				} while (((inptOne != 1) && (inptOne != 0)) || ((inptTwo != 1) && (inptTwo != 0)));

				do {
					cout << "\nThere are seven logic gates you can apply to these values:\n 1: AND\n 2: OR\n 3: XOR\n 4: NOT\n 5: NAND\n 6: NOR\n 7: XNOR\n\nMake your choice: ";
						cin >> optOne;
				if ((optOne < 1) && (optOne > 7))
					cout << "\nThat option is invalid! Go again!\n";
				} while ((optOne < 1) || (optOne > 7));
			
				switch (optOne)
				{
					case 1:
						cout << "\nThe value of " << inptOne << " AND " << inptTwo << " is " << (inptOne && inptTwo) << endl;		
						break;
					case 2:
						cout << "\nThe value of " << inptOne << " OR " << inptTwo << " is " << (inptOne || inptTwo) << endl;	
						break;
					case 3:
						if (inptOne != inptTwo)
							cout << "\nThe value of " << inptOne << " XOR " << inptTwo << " is " << (inptOne || inptTwo) << endl;
						else
							cout << "\nThe value of " << inptOne << " XOR " << inptTwo << " is " << (inptOne - inptTwo) << endl;
						break;
					case 4:
						cout << "\nThe inverse of " << inptOne << " is " << !inptOne << endl;	
						cout << "\nThe inverse of " << inptTwo << " is " << !inptTwo << endl;
						break;
					case 5:
						cout << "\nThe value of " << inptOne << " NAND " << inptTwo << " is " << !(inptOne && inptTwo) << endl;	
						break;
					case 6:
						cout << "\nThe value of " << inptOne << " NOR " << inptTwo << " is " << !(inptOne || inptTwo) << endl;	
						break;
					case 7:
						if (inptOne != inptTwo)
							cout << "\nThe value of " << inptOne << " XNOR " << inptTwo << " is " << !(inptOne || inptTwo) << endl;
						else
							cout << "\nThe value of " << inptOne << " XNOR " << inptTwo << " is " << !(inptOne - inptTwo) << endl;
						break;
				}
				break;
			case 3:
				do {
					cout << "\nEnter the maximum number you would like to display in the sequence: ";
						cin >> inptOne;
					if (inptOne < 0)
						cout << "\nThat is an invalid option! Go again!\n";
				} while (inptOne < 0);

				do {
					cout << "\nWhat would you like to do?\n 1. List all odd numbers\n 2. List all even numbers.\n 3. List all natural numbers.\n\nMake your choice: "; //List all primes later!
						cin >> optOne;
					if ((optOne < 1) || (optOne > 3))
						cout << "\nThat option is invalid! Go again!\n";
				} while ((optOne < 1) || (optOne > 3));

				switch (optOne)
				{
					case 1:
						cout << "\nHere is a sequence of all odd numbers from 0 to " << inptOne << ".\n";
						for (inptTwo = 1; inptTwo <= inptOne; inptTwo += 2)
							cout << inptTwo << endl;
						break;
					case 2:
						cout << "\nHere is a sequence of all even numbers from 0 to " << inptOne << ".\n";
						for (inptTwo = 2; inptTwo <= inptOne; inptTwo += 2)
							cout << inptTwo << endl;
						break;
					case 3:
						cout << "\nHere is a sequence of all numbers from 0 to " << inptOne << ".\n";
						for (inptTwo = 0; inptTwo <= inptOne; inptTwo++)
							cout << inptTwo << endl;
						break;
				}
				break;
			case 4:
				do {
					cout << "\nWhat would you like to do?\n 1. Find the length of one of the sides of the right triangle.\n 2. Find the length of the hypotenuse of the right triangle.\n\nMake your choice: ";
						cin >> optOne;
					if ((optOne < 1) || (optOne > 2))
						cout << "\nThat option is invalid! Go again!\n";
				} while ((optOne < 1) || (optOne > 2));

				switch (optOne)
				{
					case 1:
						do {
							cout << "\nInput the length the known side length: ";
								cin >> inptOne;
							cout << "\nInput the length of the hypotenuse: ";
								cin >> inptTwo;
							if ((inptOne < 0) || (inptTwo < 0) || (inptTwo < inptOne))
								cout << "\nOne or both of your inputs are invalid! Go again!\n";
						} while ((inptOne < 0) || (inptTwo < 0) || (inptTwo < inptOne));
							cout << "\nThe unknown side length for right triangle with known side length " << inptOne << " and hypotenuse length " << inptTwo << " is " << sqrt((inptTwo * inptTwo) - (inptOne* inptOne)) << endl;
						break;
					case 2:
						do {
							cout << "\nInput the length one known side length: ";
								cin >> inptOne;
							cout << "\nInput the length of the other known side length: ";
								cin >> inptTwo;
							if ((inptOne < 0) || (inptTwo < 0))
								cout << "\nOne or both of your inputs are invalid! Go again!\n";
						} while ((inptOne < 0) || (inptTwo < 0));
							cout << "\nThe hypotenuse length for right triangle with one known side length " << inptOne << " and other known side length " << inptTwo << " is " << sqrt((inptOne* inptOne) + (inptTwo * inptTwo)) << endl;
						break;
				}
				break;
			case 5:
				cout << "\nThis program is currently incapable of displaying imaginary roots, but that will change in the future.\n\nPlease enter the first coefficient or a: ";
					cin >> inptOne;
				cout << "\nPlease enter the second coefficient or b: ";
					cin >> inptTwo;
				cout << "\nPlease enter the third coefficient also known as the constant or c: ";
					cin >> inptThree;
				cout << "\nThe first root of this equation is " << (((0 - inptTwo) + sqrt((inptTwo*inptTwo) - (4 * inptOne * inptThree)))/(2 * inptOne))
					<< "\nThe second root of this equation is " << (((0 - inptTwo) - sqrt((inptTwo*inptTwo) - (4 * inptOne * inptThree)))/(2 * inptOne));
				break;
			case 6:
				cout << "\nWhat is the number you would like to use for his example? ";
					cin >> inptOne;
				cout << endl << inptOne;

				cout << "\n\nObserve that we don't have trailing zeros printed to the screen\nThe showpoint manipulator forces trailing zeros to be printed\n\n";

				cout.setf(ios::fixed);
				cout.setf(ios::showpoint);
				cout << inptOne;

				cout << "\n\nIf you need to set precision, use manipulator setprecision. In this case the precision will be three decimal places\n\n";
				cout.precision(3);
				cout << inptOne << endl;
				cout.unsetf(ios::showpoint);
				break;
			case 7:
				do {
					cout << "\nEnter the radius of the circle you would like to know the area of: ";
						cin >> inptOne;
					if (inptOne < 0)
						cout << "\nThat input is invalid! Go again!\n";
				} while (inptOne < 0);
				cout << "\nThe area of circle with radius " << inptOne << " is " << (PI * inptOne * inptOne) << endl;
				break;
			} cout << "\n\nWould you like to go again? (y,n): "; cin >> optTwo;
		} while (optTwo == 'y');

		cout << "\nHave a great rest of your day!\n";

	return 0;				// The return statement terminates a funtction. The
}						    // main function needs to return 0 at some point
						    // because it indicates a successful execution of
						    // the program. Functions can have multiple return
						    // statements


