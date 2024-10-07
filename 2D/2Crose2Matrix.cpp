#include <iostream>
using namespace std;
int main()
{
    int r1, c1;
    cout << "enter row and column";
    cin >> r1 >> c1;
    int a[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    int r2, c2;
    cout << "enter row and column";
    cin >> r2 >> c2;
    int b[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    if (c1 != r2)
    {
        cout << "matrix multiplication is not possible";
    }

    else
    {
        int c[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}