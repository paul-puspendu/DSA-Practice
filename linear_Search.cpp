#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void lnr_Src(int arr[], int l, int k)
{
    for (int i = 0; i < l; i++)
    {
        if (k == arr[i])
        {
            cout << "Given key found at index " << i << "." << endl;
            return;
        }
        if (i == l - 1)
        {
            cout << "Index not found." << endl;
        }
    }
}

int main()
{
    int size = 10, length = 10;
    int A[size] = {8, 9, 4, 7, 6, 3, 10, 5, 14, 2};
    lnr_Src(A, 10, 14);
    return 0;
}