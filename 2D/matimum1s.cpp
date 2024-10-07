#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter size of row and column";
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
                count++;
        }
        if (f < count)
        {
            f = i;
        }
    }
    cout << f;
    return 0;
}