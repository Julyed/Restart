#include <iostream>
#include <vector>

using namespace std;

int* newarray(int);

int main()
{
    int n;
    cin >> n;
    int* arr1 = newarray(n);
    vector<int> arr2(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr1[i] << endl;
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr2[i] << endl;
    }

    return 0;
}

int* newarray(int n)
{
    int* p = new int[n];
    return p;
}
