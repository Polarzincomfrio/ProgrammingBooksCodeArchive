/* Exercise 03 -- Write a C++ program that uses three user-defined functions (counting main() as one) and produces the following output: 
    Three blind mice
    Three blind mice
    See how they run
    See how they run
One function, called two times, should produce the first two lines, and the remaining function, also called twice, should produce the remaining output.
*/

#include <iostream>
void func1();
void func2();

int main()
{
    func1();
    func1();
    func2();
    func2();
}

void func1()
{
    using namespace std;
    cout << "Three blind mice" << endl;
}

void func2()
{
    using namespace std;
    cout << "See how they run" << endl;
}