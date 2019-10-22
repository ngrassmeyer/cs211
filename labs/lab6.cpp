#include <iostream>

using namespace std;

unsigned short findMax(unsigned short inpt[]);

int main()
{
	unsigned short studGrad[5];

	cout << "Enter the grades of each student.\n\n";

	for (unsigned short i = 0; i < 5; i++)
	{
		cout << "Enter student " << (i + 1) << "'s  grade: ";
			cin >> studGrad[i];
	}

	cout << "\nThe max student grade is a " << findMax(studGrad) << ".\n";

	return 0;
}

unsigned short findMax(unsigned short inpt[])
{
	unsigned short arrMax = 0;

	for (unsigned short i = 0; i < 5; i++)
	{
		if (inpt[i] > arrMax)
			arrMax = inpt[i];
	}

	return arrMax;
}

/*unsigned short calcGradeRange(unsigned short inpt);

int main()
{
	unsigned char studGrad[5] = { 'A', 'B', 'C', 'D', 'F' };
	unsigned short inptSeq, inptMax = 0, i = 1;

	cout << "Enter the grades of each student. Entering 0 will terminate the sequence and print the highest grade to the screen.\n\n";

	do {
		cout << "Enter student " << i << "'s  grade: ";
			cin >> inptSeq;
		i++;
		if (inptSeq > inptMax)
			inptMax = inptSeq;
	} while (inptSeq != 0);

	cout << "\nThe max student grade is a " << studGrad[calcGradeRange(inptMax)] << ".\n";

	return 0;
}

/*unsigned short askStudentGrades(unsigned short inpt)
{

}

unsigned short calcGradeRange(unsigned short inpt)
{
	if (inpt >= 90)
		return 0;
	else if ((inpt < 90) && (inpt >= 80))
		return 1;
	else if ((inpt < 80) && (inpt >= 70))
		return 2;
	else if ((inpt < 70) && (inpt >= 65))
		return 3;
	else
		return 4;
}*/