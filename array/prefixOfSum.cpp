#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "enter five array";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {

            sum += a[j];
        }
        cout << sum << " ";
    }
    return 0;
}