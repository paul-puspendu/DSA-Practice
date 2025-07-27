#include <iostream>
using namespace std;

int cnt_Num_Of_Vow(char A[])
{
    int c1 = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        switch (A[i])
        {
        case 'a':
            c1++;
            break;
        case 'e':
            c1++;
            break;
        case 'i':
            c1++;
            break;
        case 'o':
            c1++;
            break;
        case 'u':
            c1++;
            break;
        case 'A':
            c1++;
            break;
        case 'E':
            c1++;
            break;
        case 'I':
            c1++;
            break;
        case 'O':
            c1++;
            break;
        case 'U':
            c1++;
            break;
        }
    }
    return c1;
}

int cnt_Num_Of_Cont(char A[])
{
    int c2 = 0;
    int c1 = cnt_Num_Of_Vow(A);
    for (int i = 0; A[i] != '\0'; i++)
    {
        if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
        {
            c2++;
        }
    }
    return c2 - c1;
}

int main()
{
    char A[] = "How are you?";
    int c1 = 0, c2 = 0;
    cout << "Total number of vowels is " << cnt_Num_Of_Vow(A) << endl;
    cout << "Total number of consonants is " << cnt_Num_Of_Cont(A) << endl;
    return 0;
}