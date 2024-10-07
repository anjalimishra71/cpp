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

    // for (int i = 0; i < 5; i++)
    // {

    //     int f = 0;
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (a[i] == a[j])
    //         {
    //             f++;
    //             // break;
    //         }
    //     }
    //     if (f == 1)
    //     {
    //         cout << "unique num is=" << a[i];
    //     }
    // }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                a[i] = a[j] = -1;
            }
        }
    }
    for (int i = 0; i < 5; i++)

    {
        if (a[i] > 0)
        {
            cout << a[i];
        }
    }

    return 0;
}