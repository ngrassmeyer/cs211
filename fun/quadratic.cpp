#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long double
		a,
		b,
		c,
		x1,
		x2;

	cout << "Please enter the value of 'a'... ";
		cin >> a;
	cout << "Please enter the value of 'b'... ";
		cin >> b;
	cout << "Please enter the value of 'c'... ";
		cin >> c;

		x1 = (-b + sqrt((b * b) + -4 * a * c)) / (2 * a);
		x2 = (-b - sqrt((b * b) + -4 * a * c)) / (2 * a);

	cout << "Here are the two possible values for 'x'... \n" << x1
		 << "\n" << x2;
	
	return 0;
}
