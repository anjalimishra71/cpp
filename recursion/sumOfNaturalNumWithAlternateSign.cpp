#include <iostream>
using namespace std;
int sumOfAlternateSign(int n)
{
    if (n == 0)
        return 0;
    return sumOfAlternateSign(n - 1) + ((n % 2 == 0) ? (-n) : (n));
}

int main()
{
    cout << sumOfAlternateSign(10) << endl;
    return 0;
}