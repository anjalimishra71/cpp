#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of series";
    cin >> n;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            result -= i;
        else
            result += i;
    }
    cout << result;
    return 0;
}