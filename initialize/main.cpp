#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n_int = INT_MAX;
    cout << "n_int " << n_int << endl;
    int uncles = 5;
    cout << "uncles " << uncles << endl;
    int aunts = uncles;
    cout << "aunts " << aunts << endl;
    int chairs = aunts + uncles + 4;
    cout << "chairs " << chairs << endl;
    int wrens(233);
    cout << "wrens " << wrens << endl;
    int hamburgers = {24};
    cout << "hamburgers " << hamburgers << endl;
    int emus{7};
    cout << "emus " << emus << endl;
    int rocs = {};
    cout << "rocs " << rocs << endl;
    int psychics{};
    cout << "psychics " << psychics << endl;
    return 0;
}
