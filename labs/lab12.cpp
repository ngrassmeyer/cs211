/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 12
Description: Structure Proof of Concept*/

#include <iostream>
#include <string>

using namespace std;

struct Student
{
	string name, major;
	float gpa;
	unsigned short age;
}s1 = { "NULL", "NULL", 0, 0 }, s2 = { "Ryan McGee", "Architectural Engineering", 3.87, 22 }, s3 = { "NULL", "NULL", 0, 0 }, s4 = { "NULL", "NULL", 0, 0 };

void fillStruct(Student& student)
{
	cout << "\nEnter the name of student: ";
		cin.ignore();
		getline(cin, student.name);
	cout << "Enter the age of student: ";
		cin >> student.age;
	cout << "Enter the GPA of student: ";
		cin >> student.gpa;
	cout << "Enter the major of student: ";
		cin.ignore();
		getline(cin, student.major);
}

void printStruct(const Student& student)
{
	cout << "\nStudent's name is " << student.name << ", age " << student.age << ". \nTheir major is " << student.major << " and they have a current GPA of " << student.gpa << endl;
}

void scholElig(const float& gpa)
{
	if (gpa >= 3.5)
		cout << "\nThis student is eligible for scholarship opportunities!\n";
	else
		cout << "\nThis student is not eligible for scholarship opportunities.\n";
}

int main()
{
	unsigned short optOne, optThree;
	char optTwo;
		do {
			cout << "What would you like to do? Options:\n 1. Alter Student Information\n 2. Display Student Information\n 3. Check Scholarship Eligibility\nMake your choice: ";
				cin >> optThree;
			switch (optThree)
			{
				case 1:
				{
					cout << "\nWhich student would you like to alter information for? Options: \n 1. " << s1.name << "\n 2. " << s2.name << "\n 3. " << s3.name << "\n 4. " << s4.name << "\nMake your choice: ";
						cin >> optOne;
					switch (optOne)
					{
					case 1:
						fillStruct(s1);
						break;
					case 2:
						fillStruct(s2);
						break;
					case 3:
						fillStruct(s3);
						break;
					case 4:
						fillStruct(s4);
						break;
					}
					break;
				}
				case 2:
				{
					cout << "\nWhich student would you like to display information for? Options: \n 1. " << s1.name << "\n 2. " << s2.name << "\n 3. " << s3.name << "\n 4. " << s4.name << "\nMake your choice: ";
						cin >> optOne;
					switch (optOne)
					{
					case 1:
						printStruct(s1);
						break;
					case 2:
						printStruct(s2);
						break;
					case 3:
						printStruct(s3);
						break;
					case 4:
						printStruct(s4);
						break;
					}
					break;
				}
				case 3:
				{
					cout << "\nFor which student would you like to confirm scholarship eligibility? Options: \n 1. " << s1.name << "\n 2. " << s2.name << "\n 3. " << s3.name << "\n 4. " << s4.name << "\nMake your choice: ";
						cin >> optOne;
					switch (optOne)
					{
					case 1:
						scholElig(s1.gpa);
						break;
					case 2:
						scholElig(s2.gpa);
						break;
					case 3:
						scholElig(s3.gpa);
						break;
					case 4:
						scholElig(s4.gpa);
						break;
					}
					break;
				}
			}
		cout << "\nGo back to the begining? (y,n) ";
			cin >> optTwo;
		cout << endl;
		} while ((optTwo == 'Y') || (optTwo == 'y'));
		cout << "\nHave a great rest of your day!\n";
	return 0;
}