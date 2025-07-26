#include <iostream>
using namespace std;

int cnt_Words(char A[])
{
    int c = 1;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 32 && A[i - 1] != 32) 
        {
            c++;
        }
    }
    return c;
}

int main()
{
    char A[] = "How are you?";
    cout << "Total number of words is " << cnt_Words(A) << endl;
    return 0;
}
