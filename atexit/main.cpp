#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void fn1(), fn2(), fn3(), fn4();

int main()
{
    atexit(fn1);
    atexit(fn2);
    atexit(fn3);
    atexit(fn4);
    cout << "Hello world!" << endl;
    return 0;
}

void fn1()
{
    cout << "wo ";
}

void fn2()
{
    cout << "shi ";
}

void fn3()
{
    cout << "zhu ";
}

void fn4()
{
    cout << "ba..";
}
