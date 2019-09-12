#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const float PI = 3.14159;

float main()
{
	float varOne, varTwo, optOne;
	char optTwo = 'Y';

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	while (optTwo == 'Y')
	{
		cout << "\nThere are four programs:\n 1. Sqaure Root\n 2. Area of Circle\n 3. Area of Rectangle\n 4. Income Tax\n\nChoose an option: ";
		cin >> optOne;

		if (optOne == 1)
		{
			cout << "\nEnter the value you wish to take the square root of: ";
			cin >> varOne;
			cout << "\nThe square root of " << varOne << " is " << sqrt(varOne) << endl;
		}
		else if (optOne == 2)
		{
			cout << "\nEnter radius of your circle: ";
			cin >> varOne;
			cout << "\nThe area of circle with radius " << varOne << " is " << PI * varOne * varOne << endl;
		}
		else if (optOne == 3)
		{
			cout << "\nEnter the width of your rectangle: ";
			cin >> varOne;
			cout << "\nEnter the height of your rectangle: ";
			cin >> varTwo;
			cout << "\nThe area of rectangle with width " << varOne << " and height " << varTwo << " is " << varOne * varTwo << endl;
		}
		else if (optOne == 4)
		{
			cout << "\nPlease enter your yearly income: ";
			cin >> varOne;

			if (varOne <= 15000)
			{
				cout << "\nYou have to pay $0 in taxes!\n";
			}
			else if ((varOne > 15000) && (varOne < 25000))
			{
				cout << "\nYou have to pay $" << ((varOne - 15000) * 0.05) << " in taxes!\n";
			}
			else if (varOne >= 25000)
			{
				cout << "\nYou have to pay $" << (500 + ((varOne - 25000) * 0.10)) << " in taxes!\n";
			}
			else
				cout << "\nYou entered an invalid income!\n";
		}
		else
			cout << "\nThat option is invalid.";
		cout << "\nDo you want to go again? (Y,n): ";
			cin >> optTwo;
	}
	return 0;
}