#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int res[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}