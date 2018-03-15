#include <iostream>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

int main()
{
    CandyBar snake[3] = {"Mocha Munch", 2.3, 350, "Da Baitu", 3.0, 100, "Chihuo", 5.0, 600};
    for(int i = 0; i < 3; i++)
    {
        cout << snake[i].brand << " " << snake[i].weight << " " << snake[i].calorie << endl;
    }
    return 0;
}
