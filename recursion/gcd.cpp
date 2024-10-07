#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (y > x)
        return gcd(y, x);
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
int main()
{
    cout << gcd(40, 48);
    return 0;
}