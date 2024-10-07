#include <iostream>
using namespace std;
int main()
{
    int a[] = {-2, -1, 0, 1, 3, 4, 6, 8, 11, 12};
    int n = 10;
    int x = 12;
    int i = 0;
    int j = n - 1;
    int count = 0;

    while (i < j)
    {
        if (a[i] + a[j] == x)
        {
            count++;
            cout << a[i] << "," << a[j] << endl;
            i++;
            j--;
        }

        else if (a[i] + a[j] < x)
        {
            i++;
        }
        else
            j--;
    }
    cout << count;
    return 0;
}