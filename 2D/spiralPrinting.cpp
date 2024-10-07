#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << " enter size of row and column";
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int t = n * m;
    int count = 0;
    int minr = 0, maxr = n - 1, minc = 0, maxc = m - 1;
    while (count < t)
    {
        for (int j = minc; j <= maxc && count < t; j++)
        {
            cout << a[minr][j] << " ";
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < t; i++)
        {
            cout << a[i][maxc] << " ";
            count++;
        }
        maxc--;
        for (int j = maxc; j >= minc && count < t; j--)
        {
            cout << a[maxr][j] << " ";
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr && count < t; i--)
        {
            cout << a[i][minc] << " ";
            count++;
        }
        minc++;
    }
    return 0;
}