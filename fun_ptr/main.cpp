// fun_ptr.cpp -- pointers to functions
#include <iostream>

double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

using namespace std;

int main()
{
    using namespace std;

    int code;
    cin >> code;
    cout << "The estimate of betsy is: " << endl;
    estimate(code, betsy);
    cout << "The estimate of pam is: " << endl;
    estimate(code, pam);
    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lns, double (*fp)(int))
{
    using namespace std;
    cout << lns << "Lines will take ";
    cout << (*fp)(lns) << " hour(s)" << endl;
}
