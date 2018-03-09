#include <iostream>

using namespace std;
double ctof(double);

int main()
{
    cout << "Please enter a Celsius value: ";
    double celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << ctof(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}

double ctof(double celsius)
{
    return 1.8 * celsius + 32.0;
}
