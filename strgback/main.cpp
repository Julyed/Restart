// strgback.cpp -- a function that returns a pointer to char
#include <iostream>

using namespace std;

char * buildstr(const char c, const int times);

int main()
{
    char c;
    int times;
    cout << "Enter a char: ";
    cin >> c;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(c, times);
    cout << ps << endl;
    delete [] ps;

    cout << "Enter a char: ";
    cin >> c;
    cout << "Enter an integer: ";
    cin >> times;
    ps = buildstr(c, times);
    cout << "hahhahh+" << ps << "aaaaaakkkkqaq" << endl;
    delete [] ps;
    return 0;
}

char *buildstr(const char c, const int times)
{
    char * ps = new char[times + 1];
    for(int i = 0; i < times; i++)
    {
        ps[i] = 'c';
    }
    ps[times] = '\0';
    return ps;
}
