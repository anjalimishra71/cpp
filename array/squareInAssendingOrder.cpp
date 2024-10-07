#include <iostream>
using namespace std;
int main()
{
    int a[] = {-4, -3, -1, 0, 2, 10};
    int n = 6;
    int i = 0;
    int j = n - 1;
    int result[n];
    int k = n - 1;
    while (i <= j && k >= 0)
    {
        if (abs(a[i]) < abs(a[j]))
        {
            result[k] = a[j] * a[j];
            k--;
            j--;
        }
        else
        {
            result[k] = a[i] * a[i];
            k--;
            i++;
        }
    }
    for (int m = 0; m < n; m++)
    {
        cout << result[m] << " ";
    }
    return 0;
}