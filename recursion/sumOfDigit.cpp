#include <iostream>
using namespace std;
int sumOfDigit(int n)
{
    if (n >= 0 && n <= 9)
        return n;
    return sumOfDigit(n / 10) + (n % 10);
}
int main()
{
    int n;
    cout << "enter the num";
    cin >> n;
    cout << sumOfDigit(n);
    return 0;
}