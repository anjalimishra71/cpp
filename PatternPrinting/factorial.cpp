#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter num";
    cin >> n;
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    cout << fact;
    return 0;
}