#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter size of row and column";
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int transepose[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transepose[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transepose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}