// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>

using namespace std;

char* getname();

int main()
{
    char* name;
    name = getname();
    cout << name << " in the main() at " << (int*) name << endl;
    delete [] name;

    name = getname();
    cout << name << " in the main() at " << (int*) name <<endl;
    delete [] name;
    return 0;
}

char* getname()
{
    char* pn;
    char name[20];
    cout << "Please enter your name: ";
    cin.getline(name, 20);
    cout << name << " at " << (int*) name << endl;
    pn = new char[strlen(name) + 1];
    strcpy(pn, name);
    cout << pn << " in the getname() at " << (int*) pn << endl;
    return pn;
}
