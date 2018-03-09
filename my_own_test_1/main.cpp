#include <iostream>
using namespace std;

int main()
{
    enum week {Monday, Tuesday, Wednesday, Thirsday, Friday, Saturday, Sunday};
    week oneday = week(4);
    if(oneday == Friday)
        cout << "Yes!" << endl;
    else
        cout << "Nope.." << endl;

    enum bits {one = 1, two = 2, four = 4, eight = 8};
    bits myflag = bits(two);
    myflag = bits(myflag + 4);
    cout << myflag << endl;

    return 0;
}
