#include <iostream>
using namespace std;
int sumOfArray(int a[], int idx, int n)
{
    if (idx == n - 1)
    {
        return a[idx];
    }
    return a[idx] + sumOfArray(a, idx + 1, n);
}
int main()
{
    int a[] = {2, 3, 5, 20, 1};
    int n = 5;
    cout << sumOfArray(a, 0, n);
    return 0;
}