#include <iostream>
#include <vector>
using namespace std;
// array must be assending order
int leftMostOneRow(vector<vector<int>> &v)
{
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = v[0].size() - 1;
    // finding leftmost one in 0th row
    while (j >= 0 && v[0][j] == 1)
    {
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }
    for (int i = 1; i < v.size(); i++)
    {
        while (j >= 0 && v[i][j] == 1)
        {
            leftMostOne = j;
            j--;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}
int main()
{
    int n, m;
    cout << "enter size of row and col";
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << leftMostOneRow(v);

    return 0;
}