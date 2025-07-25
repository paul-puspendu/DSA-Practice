#include <iostream>
using namespace std;

int msg_Elmn(int A[], int fst_elmn, int l) // Finding missing elements from a sequence of number
{
    int diff = fst_elmn;
    for (int i = 0; i < l; i++)
    {
        if (diff != A[i] - i)
        {
            return diff + i;
        }
    }
    return -1;
}

int main()
{
    int size = 11;
    int A[size] = {6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17};
    cout << msg_Elmn(A, 6, size) << endl;
    return 0;
}