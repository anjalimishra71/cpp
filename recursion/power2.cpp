#include <iostream>
using namespace std;
int powerF(int a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        int result = powerF(a, b / 2);
        return result * result;
    }
    else
    {
        int result = powerF(a, (b - 1) / 2);
        return a * result * result;
    }
}
int main()
{
    int a, b;
    cout << "enter a,b";
    cin >> a >> b;
    cout << powerF(a, b);
    return 0;
}