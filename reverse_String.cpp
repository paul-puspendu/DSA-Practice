#include <iostream>
using namespace std;

int fnd_Lgth(char A[])
{
    int i = 0;
    while (A[i] != 0)
    {
        i++;
    }
    return i;
}

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void rvs_Str1(char A[]) // Method 1 for reversing a string
{
    char temp[fnd_Lgth(A)];
    for (int i = fnd_Lgth(A) - 1, j = 0; i >= 0; i--, j++)
    {
        temp[j] = A[i];
    }
    temp[fnd_Lgth(A)] = '\0';
    cout << temp << endl;
}

void rvs_Str2(char A[]) // Method 2 for reversing a string
{
    for (int i = 0, j = fnd_Lgth(A) - 1; i < j; i++, j--)
    {
        swap(A[i], A[j]);
    }
}

int main()
{
    char A[] = "python";
    rvs_Str2(A);
    cout << A << endl;
    return 0;
}