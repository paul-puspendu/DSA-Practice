#include <iostream>
using namespace std;

void find_Pair(int A[], int n, int h, int k)
{
    int H[h + 1];
    for (int i = 0; i < h + 1; i++)
    {
        H[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (k - A[i] > 0)
        {
            if (H[k - A[i]] != 0)
            {
                cout << A[i] << " + " << k - A[i] << " = " << k << endl;
            }
        }
        H[A[i]] = 1;
    }
}

int main()
{
    int size = 10;
    int A[size] = {1, 3, 4, 5, 6, 8, 9, 11, 12, 14};
    find_Pair(A, size, 14, 12);
    return 0;
}