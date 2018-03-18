#include <iostream>

using namespace std;

int main()
{
    cout << "Enter 2 numbers:\n";
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for(int i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}
