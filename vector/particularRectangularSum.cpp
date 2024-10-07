#include <iostream>
#include <vector>
using namespace std;
int rectanglesum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    int n, m;
    cout << "enter size of row and column";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout << "enter l1,r1,l2,r2";
    cin >> l1 >> r1 >> l2 >> r2;
    int sum = rectanglesum(matrix, l1, r1, l2, r2);
    cout << sum;
    return 0;
}