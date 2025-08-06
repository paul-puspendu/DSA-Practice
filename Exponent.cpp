#include <iostream>
using namespace std;

int pow1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow1(m, n - 1) * m;
    }
}

int pow2(int m, int n)
{
    int pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow = pow * m;
    }
    return pow;
}

int pow3(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n % 2 == 0)
    {
        return pow3(m * m, n / 2);
    }
    else
    {
        return m * pow3(m * m, (n - 1) / 2);
    }
}
int main()
{
    cout << pow1(2, 8) << endl;
    cout << pow2(2, 8) << endl;
    cout << pow3(2, 8) << endl;
    return 0;
}