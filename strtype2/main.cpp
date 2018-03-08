// strtype2.cpp -- assigning, adding, and appending
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yeilds s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" yeilds s2 = " << s2 << endl;

    return 0;
}
