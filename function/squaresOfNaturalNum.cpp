#include <iostream>
using namespace std;
int square(int x)
{
    return x * x;
}
int main()
{
    int n;
    cout << "enter num";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int res = square(i);

        cout << res << endl;
    }
    return 0;
}