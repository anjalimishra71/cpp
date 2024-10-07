#include <iostream>
using namespace std;
bool presentX(int arr[], int n, int i, int x)
{
    if (i == n)
        return false;
    return (arr[i] == x) || presentX(arr, n, i + 1, x);
}
int main()
{
    int arr[] = {5, 4, 1, 8, 6, -9, 8, 2, 3, 5};
    int n = 10;
    int x = 9;
    bool result = presentX(arr, n, 0, x);
    if (result)
        cout << "yes";
    else
        cout << "no";
    return 0;
}