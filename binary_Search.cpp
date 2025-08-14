#include <iostream>
using namespace std;

int Rec_bnr_src(int A[], int l, int h, int k)
{
    if (l == h)
    {
        if (A[l] == k)
        {
            return l;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        int m = (l + h) / 2;
        if(A[m] == k)
        {
            return m;
        }
        else if(A[m] > k)
        {
            return Rec_bnr_src(A, l, m - 1, k);
        }
        else
        {
            return Rec_bnr_src(A, m + 1, h, k);
        }
    }
}

int main()
{
    int size = 15;
    int arr[size] = {4, 8, 10, 16, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43};
    cout << "Index found at " << Rec_bnr_src(arr, 0, 14, 41) << endl;
    return 0;
}