// bondini.cpp -- using escape sequences
#include <iostream>

using namespace std;

int main()
{
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";

    cout << "Let them eat g\u00E2teau.\n";      // Í¨ÓÃ×Ö·ûÃû
    return 0;
}
