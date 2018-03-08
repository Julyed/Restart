// numstr.cpp -- following number input with line input
#include <iostream>

using namespace std;

int main()
{
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get();    //吸收输入数字之后输入的换行符
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!" << endl;
    return 0;
}
