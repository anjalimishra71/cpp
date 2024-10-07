#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);
    cout << "enter elements";
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "enter any particular num";
    cin >> x;
    int idx = -1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (x == v[i])
        {
            idx = i;
            break;
        }
    }

    cout << idx;

    return 0;
}