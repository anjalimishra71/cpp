#include <iostream>

using namespace std;
int main()
{
    int a[5];
    cout << "enter 5 elements";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int b[5];
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == 0)
        {
            b[j++] = a[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == 1)
        {
            b[j++] = a[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}