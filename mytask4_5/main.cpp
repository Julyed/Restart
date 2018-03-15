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
    CandyBar snake = {"Mocha Munch", 2.3, 350};
    cout << snake.brand << endl;
    cout << snake.weight << endl;
    cout << snake.calorie << endl;
    return 0;
}
