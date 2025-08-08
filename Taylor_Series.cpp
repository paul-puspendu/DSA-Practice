#include <iostream>
using namespace std;

float pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(x, n - 1) * x;
    }
}

float fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

float sum(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return sum(x, n - 1) + (pow(x, n) / fact(n));
    }
}

int main()
{
    float val_of_taylor_series = sum(3, 6);
    cout << val_of_taylor_series << endl;
    return 0;
}