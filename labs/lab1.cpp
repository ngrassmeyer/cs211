/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 1
Description: Else If Ladder*/

#include <iostream>

using namespace std;

int main()
{
	int floor;

	cout << "Enter your floor number: ";
		cin >> floor;

		if (floor == 0)
		{
			cout << "\nWelcome to the lobby!\n";
		}
		else if (floor == 1)
		{
			cout << "\nWelcome to floor one!\n";
		}
		else if (floor == 2)
		{
			cout << "\nWelcome to floor two!\n";
		}
		else if (floor == 3)
		{
			cout << "\nWelcome to floor three!\n";
		}
		else if (floor == 4)
		{
			cout << "\nWelcome to floor four!\n";
		}
		else if (floor == 5)
		{
			cout << "\nWelcome to floor five!\n";
		}
		else if (floor < 0)
		{
			cout << "\nYou're not allowed down here! Get out.\n";
		}
		else
		{
			"\nThat floor does not exist! This building only has five floors!\n";
		}

		return 0;
}