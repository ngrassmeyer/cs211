#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const float PI = 3.14159;

float main()
{
	float varOne, varTwo, optOne; //Declare all needed variables as float.
	char optTwo = 'y'; //IDeclare and initialize a variable as "y" for the while loop so the user can choose to run the program again.

	while (optTwo == 'y') //Create a while loop that will only run the program if optTwo is equal to "y".
	{
		cout << "\nThere are four programs:\n 1. Sqaure Root\n 2. Area of Circle\n 3. Area of Rectangle\n 4. Income Tax\n\nChoose an option: "; //Ask the user to choose a program.
			cin >> optOne;

		if (optOne == 1) 
		{
			cout << "\nEnter the value you wish to take the square root of: "; //Ask user for value they wish to take the square root of.
				cin >> varOne;
			cout << "\nThe square root of " << varOne << " is " << sqrt(varOne) << endl; //Use the sqrt() operation in the cmath header file to apply the operation to the value entered by the user.
		}
		else if (optOne == 2)
		{
			cout << "\nEnter radius of your circle: "; //Ask the user the radius of the circle they'd like to find the area of.
			cin >> varOne;
			cout << "\nThe area of circle with radius " << varOne << " is " << PI * varOne * varOne << endl; //Print the area of the circle to the screen in terms of the radius.
		}
		else if (optOne == 3)
		{
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(3); //Using the iomanip header file, set precision to three decimal places, set the number formatting to fixed, and show trailing zeroes with showpoint.

			cout << "\nEnter the width of your rectangle: ";
				cin >> varOne;
			cout << "\nEnter the height of your rectangle: "; //Ask the user for the height and the width of the rectangle they'd like the area of.
				cin >> varTwo;
			cout << "\nThe area of rectangle with width " << varOne << " and height " << varTwo << " is " << varOne * varTwo << endl; //Calculate and print the area of the rectangle to the screen in terms of the values entered by the user.
		}
		else if (optOne == 4)
		{
			cout << "\nPlease enter your yearly income: "; //Ask the user to provide their yeary income they'd like to know the amount of taxes they will pay on.
			cin >> varOne;

			if (varOne <= 15000)
			{
				cout << "\nYou have to pay $0 in taxes!\n"; //If the users income is less than $15,000 then they don't have to pay any taxes on that.
			}
			else if ((varOne > 15000) && (varOne < 25000))
			{
				cout << "\nYou have to pay $" << ((varOne - 15000) * 0.05) << " in taxes!\n"; //If the users income is greater than $15,000 but lower than $25,000 then the user has to pay 5% in taxes for the total amount minus $15,000.
			}
			else if (varOne >= 25000)
			{
				cout << "\nYou have to pay $" << (500 + ((varOne - 25000) * 0.10)) << " in taxes!\n"; //If the users income is greater than $25,000 then the user has to pay 10% in taxes for the total amount minus $25,000 plus $500.
			}
			else
				cout << "\nYou entered an invalid income!\n";
		}
		else
			cout << "\nThat option is invalid.";

		cout << "\nDo you want to go again? (y,n): "; //Ask the user if they'd like to runt he program again.
			cin >> optTwo;
	}
	return 0;
}