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
//    cin.get(name, ArSize);      //���з����������������
//    cout << "Enter your favorite dessert:\n";
//    cin.get(dessert, ArSize);       //����֮ǰ�Ļ��з�����Ϊ�ѵ�����β������δ�����κ�����
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
