#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &v, int target)
{
    int l = 0;
    int n = v.size() - 1;
    while (l <= n)
    {
        int mid = (l + n) / 2;
        if (v[mid] == target)
        {
            return mid;
        }
        else if (v[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            n = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k = 5;
    cout << binarySearch(v, k);

    return 0;
}