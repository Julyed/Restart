// textin2.cpp -- reading chars to end of file(����Ctrl+Z�ͻس�ģ��EOF)
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
