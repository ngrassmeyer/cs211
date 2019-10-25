#include <iostream>

using namespace std;

int main()
{
	bool gridPresent[25][25] = {}, gridFuture[25][25] = {};
	unsigned char adv;

	gridPresent[10][7] = true;
	gridPresent[10][8] = true;
	gridPresent[10][9] = true;
	gridPresent[11][8] = true;

	do {
		for (unsigned short row = 0; row <= 24; row++)
		{
			for (unsigned short col = 0; col <= 24; col++)
			{
				if (gridPresent[row][col] == true)
				{
					cout << " 0";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		for (unsigned short row = 0; row <= 24; row++)
		{
			for (unsigned short col = 0; col <= 24; col++)
			{
				gridFuture[row][col] = gridPresent[row][col];
			}
		}
		for (short row = 1; row <= 23; row++)
		{
			for (short col = 1; col <= 23; col++)
			{
				unsigned short live = 0;
				for (short up = -1; up < 2; up++)
				{
					for (short right = -1; right < 2; right++)
					{
						if (!(up == 0 && right == 0))
						{
							if (gridFuture[row + up][col + right] == true)
							{
								live++;
							}
						}
					}
				}
				gridPresent[row][col] = (live == 3 || (live == 2 && gridPresent[row][col]));
			}
		}
		cout << "Press \"G\" to advance to the next generation. Press \"T\" to terminate... " << endl;
		cin >> adv;
		system("CLS");
	} while ((adv != 'T') && (adv != 't'));
	return 0;
}
