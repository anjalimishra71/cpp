#include <iostream>
using namespace std;
int maxArray(int arr[], int idx, int n)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }
    return max(arr[idx], maxArray(arr, idx + 1, n));
}
int main()
{
    int arr[] = {13, 10, 3, 2, 15};
    int n = 5;
    cout << maxArray(arr, 0, n);
}