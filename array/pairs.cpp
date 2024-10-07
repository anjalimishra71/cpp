#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "enter 5 array";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "enter x";
    cin >> x;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] + a[j] == x)
            {
                cout << "(" << a[i] << "," << a[j] << ")";
            }
        }
    }
    return 0;
}