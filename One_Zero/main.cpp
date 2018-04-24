#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
const int MAXN = 21;

int res[MAXN];
int mVal, nVal;

// 递归函数
void calFun(int m, int n)
{
    if (n < 1 || m < 1 || (n == 1 && m != 1))
    {
        return;
    }
    if (n == m)
    {
        res[n] = 1;
        for(int i = n; i <= nVal; i++)
        {
            if(res[i]) cout << i << " ";
        }
        cout << endl;
        res[n] = 0;
    }

    calFun(m, n - 1);  // 不取n

    res[n] = 1;
    calFun(m - n, n - 1);  // 取n

    res[n] = 0;

    return;

}

int main()
{
    while(cin >> nVal >> mVal)
    {
        if(nVal > mVal)
            nVal = mVal;
        memset(res, 0, MAXN * sizeof(int));
        calFun(mVal, nVal);
    }
    return 0;
}
