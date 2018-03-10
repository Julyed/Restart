// ptrstr.cpp -- using pointers to strings
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char animal [20] = "bear";
    const char * bird = "wren";     // bird holds address of string
    char * ps;      //uninitialized

    cout << animal << " and ";      // display bear
    cout << bird << "\n";

    cout << "Enter a kind of animal: ";
    cin >> animal;                  // OK if input < 20 chars
    // cin >> ps; Too horrible a blunder to try; ps doesn't point to allocated space

    ps = animal;                    // set ps to point to string
    cout << ps << "!\n";            // ok, same as using animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];      // get new storage
    strcpy(ps, animal);             //copy string to new storage
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}
