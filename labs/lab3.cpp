/*Name: Noah Grassmeyer
WSUID: P595Z792
HW #: Lab 3
Description: Looping*/

#include <iostream>

using namespace std;

int main()
{
    int opt1, num, lim;
    char opt2;

    do {

    cout << "Here are the available programs:\n 1. Multiplication Table\n 2. Print Only Odd\n 3. Print Only Even\n 4. Print All Natural\n\nEnter your choice: ";
        cin >> opt1;


        switch(opt1)
        {
        case 1:
            cout << "\nEnter the number you would like the multiplication table of: ";
                cin >> num;
            cout << "\nEnter the maximum number you would like to multiply your input by in the table: ";
                cin >> lim;
            cout << endl;

            for (int i = 1; i <= lim; i++)
            {
                cout << num << " * " << i << " = " << num * i << "\t";
            }

            break;

        case 2:
            cout << "\nEnter the maximum number you would like printed to the screen: ";
                cin >> lim;
            cout << endl;

            for (int i = 1; i <= lim; i++)
            {
                if ((i % 2) != 0)
                    cout << i << "\t";
            }

            break;

        case 3:
            cout << "\nEnter the maximum number you would like printed to the screen: ";
                cin >> lim;
            cout << endl;

            for (int i = 1; i <= lim; i++)
            {
                if ((i % 2) == 0)
                    cout << i << "\t";
            }

            break;

        case 4:
        {
            /*cout << "\nEnter the maximum number you would like printed to the screen: ";
                cin >> lim;
            cout << endl;

            for (int i = 1; i <= lim; i++)
            {
                cout << i << "\t";
            }

            break;*/
            int i = 1;

            cout << "\nEnter the maximum number you would like printed to the screen: ";
                cin >> lim;
            cout << endl;

            while (i <= lim)
            {
                cout << i << "\t";
                i++;
            }

            break;
        }

        default:
            cout << "\nThat is an invalid option!\n";
            break;

        } cout << "\nWould you like to go again? (y,n) "; cin >> opt2;
    } while (opt2 == 'y');
    cout << "\nThank you for participating in Numerical World! :)\n\n"; return 0;
}
