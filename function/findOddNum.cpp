#include <iostream>
using namespace std;
bool isodd(int n)
{
    if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isodd(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}