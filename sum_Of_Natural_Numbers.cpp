#include <iostream>
using namespace std;

int sum_of_nat_num(int n)
{
    if (n == 0)
        return 0;
    else
        return sum_of_nat_num(n - 1) + n;
}

int main()
{
    cout << "How many natural numbers you want to add?" << endl;
    int n;
    cin >> n;
    cout << "Sum of first" << n << " natural numbers is " << sum_of_nat_num(n);
    return 0;
}