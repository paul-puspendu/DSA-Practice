#include <iostream>
using namespace std;

void cnt_Usrtd_Arr(int A[], int n) // Finding the duplicates from an unsorted array
{
    int count;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < n && A[i] != -1; j++)
        {
            if (A[i] == A[j])
            {
                count++;
                A[j] = -1;
            }
        }
        if (count != 1)
        {
            cout << A[i] << " is appearing for " << count << " times." << endl;
        }
    }
}

int main()
{
    int size = 18;
    int A[size] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 6, 2, 2, 100, 59, 59, 59, 59, 35};
    cnt_Usrtd_Arr(A, size);
    return 0;
}