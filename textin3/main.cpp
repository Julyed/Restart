// textin2.cpp -- reading chars to end of file(摁下Ctrl+Z和回车模拟EOF)
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count = 0;
    cout << "Enter characters:\n";
    cin.get(ch);
    while(!cin.fail())
    {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl;
    cout << "You entered " << count << " characters.";
    return 0;
}
