/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 3
Description: Area And Circumference Calculator*/

#include <iostream>

using namespace std;

const float PI = 3.14159; //Constant variabe declaration and initialization.

int main()
{
	float //Declare all the variables.
		r,
		a,
		c;

	cout << "Input the radius of the circle... "; //Ask the user for the radius.
		cin >> r;

	c = 2 * PI * r; //Initialize the circumference variable.
	a = PI * r * r; //Initialize the area variable.

	cout << endl << "The circumference of your circe is... " << c << endl //Print the circumference to the screen.
		<< "The area of your circle is... " << a << endl; //Print the area to the screen.

	return 0;

}
