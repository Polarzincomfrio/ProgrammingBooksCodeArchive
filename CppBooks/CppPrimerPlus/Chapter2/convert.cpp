// convert.cpp -- converts stone to pounds
#include <iostream>

int stoneToLb(int); // function prototype

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    cout << stone << " stone= ";
    cout << stoneToLb(stone) << " pounds." << endl;
    return 0;
}

int stoneToLb(int n)
{
    int pounds = 14 * n;
    return pounds;
}