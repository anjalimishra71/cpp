#include <iostream>
using namespace std;
int mazePath(int i, int j, int m, int n)
{
    if (i == m - 1 and j == n - 1)
        return 1;
    if (i >= m or j >= n)
        return 0;
    return mazePath(i, j + 1, m, n) + mazePath(i + 1, j, m, n);
}
int main()
{
    cout << mazePath(0, 0, 2, 3);
    return 0;
}