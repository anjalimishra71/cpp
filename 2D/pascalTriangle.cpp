#include <iostream>
using namespace std;
int factorial(int n)
{
    int f = 1;
    for (int i = n; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j >= 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}