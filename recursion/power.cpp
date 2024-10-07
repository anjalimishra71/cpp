#include <iostream>
using namespace std;
int powerf(int a, int b)
{
    if (b == 0)
        return 1;
    return a * powerf(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << powerf(a, b);
    return 0;
}