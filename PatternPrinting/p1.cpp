#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter num of row and column";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}