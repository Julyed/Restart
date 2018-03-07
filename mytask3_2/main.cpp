#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter your height in feet and inch." << endl;
    int feet_height, inch_height;
    cout << "feet : _\b";
    cin >> feet_height;
    cout << endl;
    cout << "inch : __\b\b";
    cin >> inch_height;
    cout << endl;

    int weight_pounds;
    cout << "Please enter your weight in pounds." << endl;
    cout << "pounds : ___\b\b\b";
    cin >> weight_pounds;
    cout << endl;

    const double inch_per_feet = 12, m_per_inch = 0.0254, pounds_per_kg = 2.2;

    double m_height = (feet_height * inch_per_feet + inch_height) * m_per_inch;
    double kg_weight = weight_pounds / pounds_per_kg;

    cout << "Your height in meter is " << m_height << ".\n";
    cout << "Your weight in kg is " << kg_weight << ".\n";

    double bmi = kg_weight / (m_height * m_height);

    cout << "Your BMI is " << bmi << ".\n";

    return 0;
}
