// choices.cpp -- array variations
#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    double a1[4] = {1.1, 1.2, 1.3, 1.4};

    vector<double> a2(4);
    a2[0] = 2.1;
    a2[1] = 2.2;
    a2[2] = 2.3;
    a2[3] = 2.4;

    array<double, 4> a3 = {3.1, 3.2, 3.3, 3.4};
    array<double, 4> a4 = a3;

    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    return 0;
}
