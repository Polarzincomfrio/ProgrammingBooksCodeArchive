/* Exercise 07 -- Write a program that asks the user to enter an hour value and a minute value. 
The main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run:
    Enter the number of hours: 9
    Enter the number of minutes: 28
    Time: 9:28
*/

#include <iostream>

void convert(int, int);

int main()
{
    using namespace std;
    cout << "Enter the number of hours: ";
    int hours, minutes;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    convert(hours, minutes);
}

void convert(int h, int m)
{
    using namespace std;
    cout << "Time: " << h << ":" << m << endl;
}