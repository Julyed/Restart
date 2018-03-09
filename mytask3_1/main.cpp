#include <iostream>

using namespace std;

int main()
{
    const int inch_per_feet = 12;
    cout << "Please enter your height in inch : __\b\b";
    int inch_height;
    cin >> inch_height;
    int feet_height = inch_height / inch_per_feet;
    cout << "Your height is " << feet_height << " feet and " << inch_height % inch_per_feet << " inch." << endl;
    return 0;
}
