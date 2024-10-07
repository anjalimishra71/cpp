#include <iostream>
using namespace std;
void evenNumbers(int n)
{
    if (n == 0)
        return;
    evenNumbers(n - 1);
    if (n % 2 == 0)
    {
        cout << n << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    evenNumbers(n);
    return 0;
}