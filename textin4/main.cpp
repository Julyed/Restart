// textin4.cpp -- reading chars with cin.get()
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    cout << "Enter characters:\n";
    int ch;
    int count = 0;

    while((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        count++;
    }
    cout << endl;
    cout << count << " characters entered.\n";
    return 0;
}
