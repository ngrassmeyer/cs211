#include <iostream>

using namespace std;

int main()
{
	double x, y;

	{
		for (y = 3; y >= -2; y--)
		{
			for (x = -3; x <= 4; x++)
			{
				if ((y >= abs(x)) || (x - y == 1) && (y >= 0))
					cout << "x";
				else
					cout << " ";
			}
			cout << endl;
		}
		for (y = 3; y >= -3; y--)
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
	return 0;
}