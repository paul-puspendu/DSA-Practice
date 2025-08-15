#include <iostream>
using namespace std;

void Merge(int A[], int B[], int C[], int LA, int LB)
{
    int i = 0, j = 0, k = 0;
    while (k < LA + LB)
    {
        if (A[i] == B[j])
        {
            C[k] = A[i];
            i++;
            j++;
            k++;
        }
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        if (B[j] < A[i])
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }
}

int main()
{
    int LA1 = 7;
    int LA2 = 9;
    int A1[LA1] = {3, 8, 16, 20, 22, 25, 29};
    int A2[LA2] = {4, 5, 10, 12, 21, 23, 30, 35, 40};
    int A3[LA1 + LA2];
    Merge(A1, A2, A3, LA1, LA2);
    for (int i = 0; i < LA1 + LA2; i++)
    {
        cout << A3[i] << endl;
    }
    return 0;
}