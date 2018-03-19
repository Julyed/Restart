#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    int x, y;
    cin >> x >> y;
    int ceng = max(abs(x), abs(y));
    int r = ceng * 2 -1;
    int basic = r * r;

    if(x == ceng && abs(y) < ceng)
        cout << basic + y + ceng << endl;
    else if(y == ceng)
        cout << basic + 3 * ceng - x;
    else if(x == -ceng)
        cout << basic + 5 * ceng - y;
    else
        cout << basic + 7 * ceng + x;

    return 0;
}
