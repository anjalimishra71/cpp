#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter num";
    cin >> n;
    int lastdigit;
    int ans, power = 1;
    while (n > 0)
    {
        lastdigit = n % 10;
        ans += lastdigit * power;
        power *= 2;
        n = n / 10;
    }
    cout << ans;
    return 0;
}