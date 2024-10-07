#include <iostream>
#include <vector>
using namespace std;
int sumOfLToR(vector<int> &v, int l, int r)
{
    int sum = 0;
    for (int i = l - 1; i <= r - 1; i++)
    {
        sum += v[i];
    }
    return sum;
}
int main()
{
    int l, r, n;
    cout << "enter size";
    cin >> n;
    cout << "enter starting ele";
    cin >> l;
    cout << "enter ending ele";
    cin >> r;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << sumOfLToR(v, l, r);
    return 0;
}