#include <iostream>
using namespace std;

void fnd_Max_Min_Elmt(int A[], int n)
{
    int max = A[0];
    int min = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << "Maximum element is " << max << "." << endl;
    cout << "Minimum element is " << min << "." << endl;
    
}

int main() 
{
    int size = 11;
    int A[size] = {5, 8, 3, 9, 6, 2, 10, 7, 20, 4, 100};
    fnd_Max_Min_Elmt(A, size);
    return 0;
}