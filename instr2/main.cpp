// instr2.cpp -- reading more than one word with getline
#include <iostream>

using namespace std;

int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

//    cout << "Enter your name:\n";
//    cin.getline(name, ArSize);
//    cout << "Enter your favorite dessert:\n";
//    cin.getline(dessert, ArSize);
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//
//    cout << "Enter your name:\n";
//    cin.get(name, ArSize);      //换行符会留在输入队列中
//    cout << "Enter your favorite dessert:\n";
//    cin.get(dessert, ArSize);       //看到之前的换行符，认为已到达行尾，所以未读入任何内容
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";

    cout << "Enter your name:\n";
    cin.get(name, ArSize);
    cin.get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize);
    cin.get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    cout << "Enter your name:\n";
    cin.getline(name, ArSize).getline(dessert, ArSize);
    cout << "Enter your favorite dessert:\n";
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
