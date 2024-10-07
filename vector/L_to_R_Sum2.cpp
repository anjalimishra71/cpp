#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    // calculate prefix sum array
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }
    int q;
    cout << "enter query";
    cin >> q;
    while (q--)
    {
        int l, r;
        cout << "enter starting and last ind";
        cin >> l >> r;
        int ans = 0;
        // ans=prefixsumarray[r]-prefixsumarray[l-1]
        ans = v[r] - v[l - 1];
        cout << ans << endl;
    }
    return 0;
}