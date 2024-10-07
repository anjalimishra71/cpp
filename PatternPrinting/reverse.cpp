#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter num";
    cin >> n;
    int lastdigit, rev = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        n = n / 10;
        rev = rev * 10 + lastdigit;
    }
    cout << "reverse number is=" << rev;
    return 0;
}