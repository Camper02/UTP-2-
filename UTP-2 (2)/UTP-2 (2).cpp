#include "UTP-2 (2).h"

using namespace std;

int main()
{
    const int n = 4;
    short int A[n] = { 2, -7, 3, 5 };
    short int B[n];

    cout << "A: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    Copy(A, B, n);

    cout << "B: ";
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}