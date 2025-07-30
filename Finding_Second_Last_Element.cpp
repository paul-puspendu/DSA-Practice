#include <iostream>
using namespace std;

int fnd_Max_Idx(int A[], int n)
{
    int max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] == max)
        {
            return i;
        }
    }
}

int fnd_2nd_Lrg_Elmt(int A[], int n)
{
    int lrg_Idx = fnd_Max_Idx(A, n);
    int snd_Max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (i == lrg_Idx)
        {
            i++;
        }
        if (A[i] > snd_Max)
        {
            snd_Max = A[i];
        }
    }
    return snd_Max;
}

int main()
{
    int size = 8;
    int A[size] = {7, 12, 30, 20, 18, 13, 9, 5};
    cout << "Second maximum of your array is " << fnd_2nd_Lrg_Elmt(A, size) << endl;
    return 0;
}