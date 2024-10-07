#include <iostream>
#include <vector>
using namespace std;
int checkPairs(vector<int> &v, int x)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == x)
            {
                return 1;
                break;
            }
        }
    }
    return 0;
}
int main()
{
    int n, x;
    cout << "enter size";
    cin >> n;
    cout << "enter x";
    cin >> x;
    vector<int> v;
    cout << "enter elements";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    if (checkPairs(v))
    {
        cout << "yes";
    }
    else
        cout << "No";

    return 0;
}