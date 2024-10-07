#include <iostream>
using namespace std;
int firstAndLastOcc(int arr[], int n, int target)
{
    int fi = -1, sec = -1;
    while (fi == -1 && sec == -1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == target && fi == -1)

                fi = i;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == target && sec == -1)

                sec = i;
        }
    }
    return fi;
}

int main()
{
    int arr[] = {-2, -1, 1, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    cout << firstAndLastOcc(arr, n, target);
    return 0;
}