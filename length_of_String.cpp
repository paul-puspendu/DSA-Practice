#include <iostream>
using namespace std;

int main()
{
    char S[] = "Welcome";
    int i = 0;
    while (S[i] != 0)
    {
        i++;
    }
    cout << "Length of the array is " << i << endl;
    return 0;
}