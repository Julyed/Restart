// mixtypes.cpp -- some type combination
#include <iostream>

using namespace std;

struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 2001;
    antarctica_years_end *pa = &s02;
    pa->year = 2002;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << trio->year << endl;         //数组名是指向数组第一个元素的指针

    const antarctica_years_end *arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl;
    const antarctica_years_end **ppa = arp;
    cout << (*ppa)->year << endl;
    const antarctica_years_end **ppb = arp;
    cout << (*(ppb + 1))->year << endl;
    return 0;
}
