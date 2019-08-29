/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 3
Description: Area And Circumference Calculator*/

#include <iostream>

using namespace std;

const double PI = 3.14159; //Constant variabe declaration.

int main()
{
	double //Declare all the variables.
		r,
		a,
		c;

	cout << "Input the radius of the circle... "; //Ask the user for the radius.
	cin >> r;

	c = 2 * PI * r; //Initialize the circumference variable.
	a = PI * r * r; //Initialize the area variable.

	cout << "\nThe circumference of your circe is... " << c << "\n" //Print the circumference to the screen.
		<< "The area of your circle is... " << a << "\n\n"; //Print the area to the screen.

	return 0;

}
