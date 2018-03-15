#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct fish
{
    string type;
    int weight;
    double length;
};

int main()
{
    int n;
    cin >> n;
    vector<fish> fishes(n);
    for(int i = 0; i < n; i++)
    {
        cin >> fishes[i].type >> fishes[i].weight >> fishes[i].length;
    }
    for(int i = 0; i < n; i++)
    {
        cout << fishes[i].type << endl;
        cout << fishes[i].weight << endl;
        cout << fishes[i].length << endl;
    }
    return 0;
}
