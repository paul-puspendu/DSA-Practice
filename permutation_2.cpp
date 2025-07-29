#include <iostream>
using namespace std;

void swap(char &x, char &y)
{
    char t = x;
    x = y;
    y = t;
}

void perm(char S[], int l, int h)
{
    int i;
    if (l == h)
    {
        cout << S << endl;
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(S[i], S[l]);
            perm(S, l + 1, h);
            swap(S[i], S[l]);
        }
    }
}

int main()
{
    char S[] = "ABC";
    perm(S, 0, 2);
    return 0;
}