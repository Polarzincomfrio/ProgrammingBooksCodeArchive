// Exercise 4 -- Write a program that asks the user to enter his or her age. The program then should display the age in months.

#include <iostream>

int ageInMonths(int);

int main()
{
    using namespace std;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Your age in months is = " << ageInMonths(age) << " months!";
    return 0;
}

int ageInMonths(int n)
{
    return n * 12;
}