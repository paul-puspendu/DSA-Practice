#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int num_Of_Dupt(char C[], int length, int index)
{
    int c = 0;
    char x = C[index];
    for (int i = 0; i < length; i++)
    {
        if (C[i] == x)
        {
            c++;
        }
    }
    return c;
}

void is_Angm(char C1[], char C2[], int l1, int l2)
{
    int j;
    if (l1 < l2 || l1 > l2)
    {
        cout << "'" << C1 << "'" << " and " << "'" << C2 << "'" << " aren't anagrams." << endl;
        return;
    }
    for (int i = 0; i < l1; i++)
    {

        for (j = 0; j < l2; j++)
        {
            if ((tolower(C1[i]) == C2[j]) && (num_Of_Dupt(C1, i, l1) == num_Of_Dupt(C2, j, l2)))
            {
                break;
            }
            if (toupper(C1[i]) == C2[j] && num_Of_Dupt(C1, i, l1) == num_Of_Dupt(C2, j, l2))
            {
                break;
            }
            if (C1[i] == C2[j] && num_Of_Dupt(C1, i, l1) == num_Of_Dupt(C2, j, l2))
            {
                break;
            }
        }
        if (C1[i] != C2[j] && tolower(C1[i]) != C2[j] && toupper(C1[i]) != C2[j])
        {
            cout << "'" << C1 << "'" << " and " << "'" << C2 << "'" << " aren't anagrams." << endl;
            return;
        }
    }
    cout << "'" << C1 << "'" << " and " << "'" << C2 << "'" << " are anagrams." << endl;
}

int main()
{
    char C1[] = "123aBc";
    char C2[] = "A1b2C3";
    is_Angm(C1, C2, strlen(C1), strlen(C2));
    return 0;
}