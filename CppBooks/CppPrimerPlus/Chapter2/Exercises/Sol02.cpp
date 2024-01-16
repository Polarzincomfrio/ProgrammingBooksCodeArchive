// Exercise 02 -- Write a C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)

#include <iostream>

int conversion(int);

int main()
{
    using namespace std;
    cout << "Enter furlongs: ";
    int furlongs;
    cin >> furlongs;
    cout << furlongs << " furlongs = " << conversion(furlongs) << " yards." << endl;
    return 0;
}

int conversion(int f)
{
    return f * 220;
}