#include <iostream>
using namespace std;
int pow_recursive(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        int result = pow_recursive(p, q / 2);
        return result * result;
    }
    else
    {
        int result = pow_recursive(p, (q - 1) / 2);
        return p * result * result;
    }
}
int armStrong(int num, int d)
{
    if (num == 0)
        return 0;
    return pow_recursive(num % 10, d) + armStrong(num / 10, d);
}

int main()
{
    int n;
    cin >> n;
    int no_of_digit = 0;
    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        no_of_digit++;
    }
    int res = armStrong(n, no_of_digit);
    if (res == n)
    {
        cout << "yes";
    }
    else
        cout << "no";
    return 0;
}