#include <iostream>
#include <iomanip>

using namespace std;

void printWeekTemps(unsigned short arrOne[], unsigned short arrTwo[]);
unsigned short calcAvgTemp(unsigned short arr[]);
unsigned short dailyLow[7] = { 28, 34, 32, 45, 46, 42, 50 }, dailyHigh[7] = { 56, 72, 57, 60, 74, 65, 75 };

int main()
{
	printWeekTemps(dailyLow, dailyHigh);
	cout << "Average\t\t" << calcAvgTemp(dailyLow) << "\t" << calcAvgTemp(dailyHigh) << endl;
}

void printWeekTemps(unsigned short arrOne[], unsigned short arrTwo[])
{
	cout << "Day\t\tLow\tHigh"
		 << "\nMonday\t\t" << arrOne[0] << "\t" << arrTwo[0]
		 << "\nTuesday\t\t" << arrOne[1] << "\t" << arrTwo[1]
		 << "\nWednesday\t" << arrOne[2] << "\t" << arrTwo[2]
		 << "\nThursday\t" << arrOne[3] << "\t" << arrTwo[3]
		 << "\nFriday\t\t" << arrOne[4] << "\t" << arrTwo[4]
		 << "\nSaturday\t" << arrOne[5] << "\t" << arrTwo[5]
		 << "\nSunday\t\t" << arrOne[6] << "\t" << arrTwo[6]
		 << "\n____________________________\n\n";
}

unsigned short calcAvgTemp(unsigned short arr[])
{
	unsigned int sum = 0;
	for (unsigned short i = 0; i < 7; i++)
	{
		sum += arr[i];
	}
	return (sum / 7);
}