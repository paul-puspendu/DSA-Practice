#include <iostream>
using namespace std;

void perm(char S[], int k)
{
    static int A[10] = {0};
    static char Res[10] = {0};
    int i;
    if (S[k] == '\0')
    {
        Res[k] = '\0';
        cout << Res << endl;
    }
    else
    {
        for (i = 0; S[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                Res[k] = S[i];
                A[i] = 1;
                perm(S, k + 1);
                A[i] = 0;
            }
        }
    }
}

int main()
{
    char C[] = "ABC";
    perm(C, 0);
    return 0;
}