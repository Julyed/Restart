//arrobj.cpp -- functions with array objects(C++11)
#include <iostream>
#include <array>
#include <string>

const int SEASONS = 4;
const std::array<std::string, SEASONS> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, SEASONS> *pa);
void show(std::array<double, SEASONS> da);

int main()
{
    std::array<double, SEASONS> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double, SEASONS> *pa)
{
    using namespace std;
    for(int i = 0; i < SEASONS; i++)
    {
        cout << "Enter the expenses of " << Snames[i] << ":\n";
        cin >> (*pa)[i];
    }
}

void show(std::array<double, SEASONS> da)
{
    using namespace std;
    double total = 0;
    cout << "$ EXPENSES $: " << endl;
    for(int i = 0; i < SEASONS; i++)
    {
        cout << "# " << i + 1 << ") " << Snames[i] << ": ";
        cout << da[i] << endl;
        total += da[i];
    }
    cout <<endl << "The total expenses is " <<total << ".\n";
}
