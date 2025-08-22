#include <iostream>
using namespace std;

bool is_Divisable(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void display_Primes(int range)
{
    cout << "First " << range << " primes are given below :" << endl;
    int c = 0, i = 2;
    while (c != range)
    {
        if (is_Divisable(i) == true)
        {
            cout << i << endl;
            c++;
        }
        i++;
    }
}

int main()
{
    int range;
    cout << "How many primes you want to display?" << endl;
    cin >> range;
    display_Primes(range);
    return 0;
}