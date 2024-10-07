#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter base" << endl;
    cin >> a;
    cout << "enter power";
    cin >> b;
    int res = 1;
    for (int i = 1; i <= b; i++)
    {
        res = res * a;
    }
    cout << res;
    return 0;
}