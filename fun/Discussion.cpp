#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

/*First: A Basic Introduction To Iterators!
	An iterator is an object (like a pointer) that points to an element inside a container. Iterators play a critical role in connecting algorithms
	with containers along with the manipulation of data stored inside containers.*/

/*Non-Modifying Sequence Operations...
	all_of, any_of, none_of (Can be thought of as AND, OR, and NAND)
	Say you wanted to check if all the values stored in an array are even. Up to this point, its fair to say you'd use a loop of some sort:*/

void all_any_none_of()
{
	array<unsigned short, 7> arrShort = { 2, 3, 4, 8, 26, 46, 2 };

	//Normal
	bool even = true; // Equivalent to bool even = 1
	for (unsigned short i = 0; i < 7; i++)
		even *= !(arrShort[i] % 2);

	if (even)
		cout << "All numbers in the array are even!";
	else
		cout << "All numbers in the array are not even!";

	cout << endl;

	//Algorithm
	if (all_of(/*First Input Iterator*/arrShort.begin(),/*Last Input Iterator*/arrShort.end(),/*Unary Function*/ [](unsigned short i) {return !(i % 2); }))
		cout << "All numbers in the array are even!";
	else
		cout << "All numbers in the array are not even!";

	//There are also any of and none of functions which are pretty self-explanatory.

	cout << endl << endl;
}

/*Non-Modifying Sequence Operations...
	for_each (Applies a function to each element of the range.)
	What about a better way to print an array?*/

void for_each()
{
	array<unsigned short, 7> arrShort = { 2, 3, 4, 8, 26, 46, 2 };

	//Normal
	for (unsigned short i = 0; i < 7; i++)
		cout << arrShort[i] << " ";

	cout << endl;

	//Algorithm
	for_each(arrShort.begin(), arrShort.end(), [](unsigned short i) { cout << i << " "; });

	cout << endl << endl;
}

/*Non-Modifying Sequence Operations...
	find (This will simply find a value in a range and tell you that it has found it. The iterator assigned to the find function now points to the value in the range.)
	Say you wanted to find a specific character in an dynamic array of characters: */

void find()
{
	vector<char> vecChar = { 'b', 'h', '7', 'y', 't' };

	vecChar.push_back('8');
	vecChar.push_back('u');
	vecChar.push_back('n');
	vecChar.push_back('8');

	//Normal
	char seek = 'h';
	unsigned short location = 0;
	while (location < vecChar.size())
	{
		if (vecChar[location] == seek)
		{
			cout << "Character " << vecChar[location] << " found at " << location;
			break;
		}
		location++;
		if (location == vecChar.size())
			cout << "Character not found!";
	}

	cout << endl;

	//Algorithm
	vector<char>::iterator k = find(vecChar.begin(), vecChar.end(), seek);
	if (k < vecChar.end())
		cout << "Character " << *k << " found at " << k - vecChar.begin() << ".";
	else
		cout << "Character not found!";

	cout << endl << endl;
}

/*There are also similar function such as find_if, find_if_not, find_end (Basically find last of), find_first_of, and adjacent_find, all of which are pretty self-explanatory.
	These can work with functions too! Subsequences work well with the related search() function that will search for

Non-Modifying Sequence Operations...
	count (This function counts how many of the desired character exists within the range.)
	Say you wanted to know the amount of twos in an array: */

void count()
{
	array<unsigned short, 7> arrShort = { 2, 3, 2, 8, 2, 46, 2 };
	unsigned short seek = 2;

	//Normal
	unsigned short num = 0;
	for (unsigned short i = 0; i < arrShort.size(); i++)
	{
		if (arrShort[i] == seek)
			num++;
	}
	cout << "Number " << seek << " was found " << num << " times in the array.";

	cout << endl;

	//Algorithm
	cout << "Number " << seek << " was found " << count(arrShort.begin(), arrShort.end(), seek) << " times in the array.";

	cout << endl << endl;
}

/*Modifying Sequence Operations...
	swap (The swap function literally just swaps two variables. Very useful in the bubble sort assignment!)*/

void swap()
{
	//Normal
	unsigned short a = 5, b = 2, c = a;
	a = b;
	b = c;
	cout << "A = " << a << " B = " << b;

	cout << endl;

	//Algorithm
	a = 5, b = 2;
	swap(a, b);
	cout << "A = " << a << " B = " << b;

	cout << endl << endl;

}

/*The more complex swap_ranges() function can swap entire arrays with one another. It is worthwhile to note that most of these algorithms are directly equivalent to the norm, they just take up less space.

Modifying Sequence Operations...
	tranform (The transform function changes the value of each element in the range by apllying a unary function to it.)*/

void transform()
{
	array<float, 7> arrShort = { 2, 3, 4, 8, 26, 46, 2 };

	//Normal
	for_each(arrShort.begin(), arrShort.end(), [](float i) { cout << i << " "; });
	for (float i = 0; i < arrShort.size(); i++)
		arrShort[i] *= (arrShort[i] / 10);
	cout << endl;
	for_each(arrShort.begin(), arrShort.end(), [](float i) { cout << i << " "; });

	cout << endl << endl;

	arrShort = { 2, 3, 4, 8, 26, 46, 2 };

	//Algorithm
	for_each(arrShort.begin(), arrShort.end(), [](float i) { cout << i << " "; });
	transform(arrShort.begin(), arrShort.end(), arrShort.begin(), [](float i) { return (i * (i / 10)); });
	cout << endl;
	for_each(arrShort.begin(), arrShort.end(), [](float i) { cout << i << " "; });

	cout << endl << endl;
}

/*This function could obviously have some interesting applications.

Modifying Sequence Operations...
	replace (This function replaces specific parts of the range with a specified value.)
	Say we have an array of strings and we would like to repalce certain words in this string array.*/

void replace()
{
	vector<char> vecStr = { 'H', 'e', 'l', 'l', 'o' };
	for_each(vecStr.begin(), vecStr.end(), [](char i) { cout << i << " "; });

	//Normal
	for (float i = 0; i < vecStr.size(); i++)
	{
		if (vecStr[i] == 'l')
			vecStr[i] = 'p';
	}

	cout << endl;
	for_each(vecStr.begin(), vecStr.end(), [](char i) { cout << i << " "; });
	cout << endl << endl;

	vecStr = { 'H', 'e', 'l', 'l', 'o' };
	for_each(vecStr.begin(), vecStr.end(), [](char i) { cout << i << " "; });

	//Algorithm
	replace(vecStr.begin(), vecStr.end(), 'l', 'p');
	cout << endl;

	for_each(vecStr.begin(), vecStr.end(), [](char i) { cout << i << " "; });
	cout << endl << endl;
}

/*Modifying Sequence Operations...
	fill (The fill() function simply fills the entire range with a single value.)*/

void fill()
{
	array<unsigned short, 7> arrShort = {  };
	unsigned short val = 0;

	//Normal
	for (unsigned short i = 0; i < arrShort.size(); i++)
		arrShort[i] = val;
	for_each(arrShort.begin(), arrShort.end(), [](unsigned short i) { cout << i << " "; });
	cout << endl;

	arrShort = {  };

	//Algorithm
	fill(arrShort.begin(), arrShort.end(), val);
	for_each(arrShort.begin(), arrShort.end(), [](unsigned short i) { cout << i << " "; });
	cout << endl << endl;
}
/*This function could obviously have some interesting applications.

Modifying Sequence Operations...
	reverse (This function rotates the entire range about it's center.)*/

void reverse()
{
	vector<unsigned short> arrShort;
	
	//Normal
	arrShort = { 0, 1, 2, 3, 4, 5, 6, 7 };
	for (unsigned short i = 0; i < arrShort.size(); i++)
		cout << arrShort[i] << " ";
	cout << endl;
	for (unsigned short first = 0, last = arrShort.size(); first != last--; first++)
	{
		char temp = arrShort[first];
		arrShort[first] = arrShort[last];
		arrShort[last] = temp;
	}
	for (unsigned short i = 0; i < arrShort.size(); i++)
		cout << arrShort[i] << " ";
	cout << endl << endl;

	//Algorithm
	arrShort = { 0, 1, 2, 3, 4, 5, 6, 7 };
	for_each(arrShort.begin(), arrShort.end(), [](unsigned short i) { cout << i << " "; });
	cout << endl;
	reverse(arrShort.begin(), arrShort.end());
	for_each(arrShort.begin(), arrShort.end(), [](unsigned short i) { cout << i << " "; });
	cout << endl << endl;
}

/*You also have a fuction called rotate() which rotates the entire array in such a way that the specified middle index becomes the first index. 
	This might be useful for some sort of cryptography. Because what if we had a key that specified in what order what indexes were rotated around.
	
Modifying Sequence Operations...
	sort (This function sorts values in the range in ascending order. Basically the one line equivalent of bubble sort! 
	Compresses the bubble sort assignment into about ten lines: */

void sort()
{
	//Normal
	vector<string> inptVect = { }; 
	string inptStr;
	unsigned short boundLim = 0;
	do {
		cout << "Enter a word: ";
			cin >> inptStr;
			if (inptStr != "0")
			{
				inptVect.push_back(inptStr);
				boundLim++;
			}
	} while (inptStr != "0");
	for (unsigned short i = 0; i < boundLim - 1; i++)
	{
		for (unsigned short j = 0; j < boundLim - i - 1; j++)
		{
			if (inptVect.at(j) > inptVect.at(j + 1))
			{
				string temp = inptVect.at(j);
				inptVect.at(j) = inptVect.at(j + 1);
				inptVect.at(j + 1) = temp;
			}
		}
	}
	cout << "\nYour sorted list is: ";
	for (unsigned short i = 0; i < size(inptVect); i++)
		cout << inptVect.at(i) << " ";
	cout << endl << endl;

	//Algorithm
	inptVect = { };
	do {
		cout << "Enter a word: ";
			cin >> inptStr;
		if (inptStr != "0")
			inptVect.push_back(inptStr);
	} while (inptStr != "0");
	sort(inptVect.begin(), inptVect.end());
	cout << "\nYour sorted list is: ";
	for_each(inptVect.begin(), inptVect.end(), [](string i) { cout << i << " "; });
	cout << endl << endl;
}

/*Modifying Sequence Operations...
	min_element, max_element, and minmax_element (These functions do exactly what you would expect them to do. The return the min, max, or both values from the range. Lets do an example finding the max.*/

void minmax()
{
	array<unsigned short, 7> arrShort = { 2, 3, 4, 8, 26, 46, 2 };

	//Normal
	unsigned short max = 0, maxloc;
	for (unsigned short i = 0; i < arrShort.size(); i++)
	{
		if (arrShort[i] > max);
		{
			maxloc = i;
			max = arrShort[i];
		}
	}
	cout << "The maximum value in the array is " << max << " at location " << maxloc << ".\n";

	//Algorithm
	cout << "The maximum value in the array is " << *max_element(arrShort.begin(), arrShort.end()) << " at location " << max_element(arrShort.begin(), arrShort.end()) - arrShort.begin() << ".\n";
}

int main()
{
	all_any_none_of();
	for_each();
	find();
	count();
	swap();
	transform();
	replace();
	fill();
	reverse();
	sort();
	minmax();
}