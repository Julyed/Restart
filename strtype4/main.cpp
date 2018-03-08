// strtype4.cpp -- line input
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Length of string in str before input: " << str.size() << endl;
    cout << "Enter a line of text: " << endl;
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in str after input: " << str.size() << endl;
    return 0;
}
