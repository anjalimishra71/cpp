
#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "enter five array:";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int j = 4;
    for (int i = 0, j = 4; i < j; i++, j--)
    {
        // if (a[i] == 1 || a[j] == 0)
        //{
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        // }
        // else
        //   j--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}