#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 10> run;
    cin >> run[0];
    cin >> run[1];
    cin >> run[2];
    int num = 3;
    double sum = 0;
    for(int i = 0; i < num; i++)
        sum += run[i];
    double mean = sum / num;
    cout << "次数： " << num << "  平均值： " << mean << endl;
    return 0;
}
