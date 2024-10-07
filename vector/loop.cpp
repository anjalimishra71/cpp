#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.insert(v.begin() + 2, 8);

    cout << endl;
    // for each loop
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    v.erase(v.end() - 2);
    int idx = 0;
    while (idx < v.size())
    {
        cout << v[idx++] << " ";
    }
    return 0;
}