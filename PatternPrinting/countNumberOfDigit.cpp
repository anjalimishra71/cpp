#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter num";
    cin >> n;
    int sum = 0, lastdigit;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
    }
    cout << "number of digits=" << sum;
    return 0;
}