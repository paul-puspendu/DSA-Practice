#include <iostream>
using namespace std;

void cnt_Dupt_Elmt(int A[], int n)
{
    for (int i = 0, j = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            j = i + 1;
            while (j < n && A[i] == A[j])
            {
                j++;
            }
            cout << A[i] << " is appearing " << j - i << " times." << endl;
            i = j - 1;
        }
    }
}

int main()
{
    int size = 18;
    int A[size] = {3, 3, 8, 8, 10, 10, 10, 10, 15, 20, 25, 30, 35, 35, 35, 35, 35, 35};
    cnt_Dupt_Elmt(A, size);
    return 0;
}