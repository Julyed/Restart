#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int n_str = 10;
    char fname[n_str], lname[n_str];
    char name[2 * n_str];
    cout << "Enter your first name: ";
    cin.getline(fname, n_str);
    cout << "Enter your last name: ";
    cin.getline(lname, n_str);
    strcpy(name, fname);
    int siz = strlen(fname);
    name[siz] = ',';
    name[siz + 1] = ' ';
    name[siz + 2] = '\0';
    strcat(name, lname);
    cout << "Here's the information in a single string: ";
    cout << name << endl;
    return 0;
}
