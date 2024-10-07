#include <iostream>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int num;
    cout << "enter num";
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}