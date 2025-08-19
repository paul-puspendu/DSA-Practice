#include <iostream>
using namespace std;

void find_Pair(int A[], int n, int k)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (A[i] + A[j] == k)
        {
            cout << A[i] << " + " << A[j] << " = " << k << endl;
            i++;
            j--;
        }
        else if (A[i] + A[j] > k)
        {
            j--;
        }
        else if (A[i] + A[j] < k)
        {
            i++;
        }
    }
}

int main()
{
    int size = 10;
    int A[size] = {1, 3, 4, 5, 6, 8, 9, 10, 11, 14};
    find_Pair(A, size, 12);
    return 0;
}