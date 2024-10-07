#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    int res;
    for (int i = 1; i < x && i < y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int x = 48;
    int y = 40;
    cout << gcd(12, 20);
    return 0;
}