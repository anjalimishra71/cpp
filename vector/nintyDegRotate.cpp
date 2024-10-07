#include <iostream>
#include <vector>
using namespace std;
void rotateArray(vector<vector<int>> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(v[i][j], v[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
}

int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    rotateArray(vec);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}