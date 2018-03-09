// address.cpp -- using the & operator to find address
#include <iostream>

using namespace std;

int main()
{
    int dounts = 6;
    double cups = 4.5;

    cout << "dounts value = " << dounts;
    cout << " and dounts address = " << &dounts << endl;
    cout << sizeof(dounts) << endl;

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}
