#include <iostream>
using namespace std;

struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_num;
        char id_char[20];
    }id_val;
};
int main()
{
    widget prize;
    cout << "Please enter the brand and the id type:\n";
    cout << "brand: ";
    cin >> prize.brand;
    cout << "id type: ";
    cin >> prize.type;
    cout << "Now please enter the id:";
    if(prize.type == 1)
        cin >> prize.id_val.id_num;
    else
        cin >> prize.id_val.id_char;

    return 0;
}
