#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int a = 1;
    int b = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < a; j++)
        {

            cout << (char)('A' + j);
        }

        cout << endl;
        a = a + 2;
    }
    for (int i = 1; i <= n; i++)
    {
        b = b - 2;
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < b; j++)
        {

            cout << (char)('A' + j);
        }
        cout << endl;
    }
    return 0;
}