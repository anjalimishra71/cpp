#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout << "enter the num";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "enter x";
    cin >> x;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (x < v[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}