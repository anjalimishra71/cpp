#include <iostream>
using namespace std;
void arrayFun(int a[], int idx, int n)
{
    if (idx == n)
        return;
    cout << a[idx] << endl;
    arrayFun(a, idx + 1, n);
}

int main()
{
    int a[] = {2, 3, 4, 5, 6};
    int n = 5;

    arrayFun(a, 0, n);
    return 0;
}