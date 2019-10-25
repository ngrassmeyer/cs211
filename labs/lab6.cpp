/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 6
Description: Arrays*/

#include <iostream>

using namespace std;

unsigned short findMax(unsigned short inpt[]);									// Declare a function that will find the maximum value in a one dimensional array.

int main()
{
	unsigned short studGrad[5];													// Assuming a class of five students, declare an array with five elements representing five student grades.

	cout << "Enter the grades of each student.\n\n";							// Ask the user the grades of five individual students using a for loop to store each entry in part of the array.

	for (unsigned short i = 0; i < 5; i++)
	{
		cout << "Enter student " << (i + 1) << "'s grade: ";
		cin >> studGrad[i];
	}

	cout << "\nThe max student grade is a " << findMax(studGrad) << ".\n";		// Calling the findMax function, find the maximum entered student grade and print it to the screen.

	return 0;
}

unsigned short findMax(unsigned short inpt[])									// Function heading. Below is the function body. Both are part of the function definition for the findMax function.
{
	unsigned short arrMax = 0;													// Declare local variable arrMax standing for array maximum and initialize it to zero as a starting point.

	for (unsigned short i = 0; i < sizeof(inpt); i++)							// Using a for loop, iterate through all indexes of the array input and check to see if it is larger
	{																			// than the currently stored array maximum, in this case zero. If it is larger, then replace the current
		if (inpt[i] > arrMax)													// value of arrMax with the value at that index in the array. At the conclusion of this for loop, we will have
			arrMax = inpt[i];													// found the maximum value in the array.
	}

	return arrMax;																// Return the maximum value in the array or the maximum student grade.
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