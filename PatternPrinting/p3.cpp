#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of row and column";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {

            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == n)
                cout << i;
            else
                cout << " ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            if (j == i - 1 || i == n)
                cout << i;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}