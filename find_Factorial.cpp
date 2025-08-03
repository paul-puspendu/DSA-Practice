#include <iostream>
using namespace std;

int fact1(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return fact1(n - 1) * n;
    }
}

int main()
{
    int ip;
    cout << "Enter the number of which you want to find the factorial :" << endl;
    cin >> ip;
    cout << fact1(ip) << endl;
    return 0;
}