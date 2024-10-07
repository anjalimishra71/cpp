#include <iostream>
#include <vector>
using namespace std;
int maximumOnesRow(vector<vector<int>> &v)
{

    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int column = v[0].size();
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int numOfOnes = column - j;
                if (numOfOnes > maxOnes)
                {
                    maxOnes = numOfOnes;
                    maxOnesRow = i;
                }
            }
        }
    }
    return maxOnesRow;
}
int main()
{
    int n, m;
    cout << "enter size of row and col";
    cin >> n >> m;
    // array must be sorted
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }

    int res = maximumOnesRow(vec);
    cout << res << endl;

    return 0;
}