#include <iostream>
using namespace std;
int main()
{
    int a[] = {5, 10, 15, 20, 26};
    int x = 10;
    int n = 5;

    int i = 0;
    int j = 1;
    bool found = false;
    while (i < n and j < n)
    {
        if (abs(a[i] - a[j]) == x)
        {
            found = true;
            break;
        }
        else if (abs(a[i] - a[j]) < x)
        {
            j++;
        }
        else
            i++;
    }
    if (found == true)
        cout << "yes";
    else
        cout << "no";
    return 0;
}