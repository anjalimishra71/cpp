#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter number of row and column";
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {
                cout << j;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}