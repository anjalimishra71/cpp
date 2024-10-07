#include <iostream>
#include <vector>
using namespace std;
int findTargetInx(vector<int> &input, int target)
{
    int n = input.size() - 1;
    int lo = 0, hi = n;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] == target)
        {
            return mid;
        }
        if (input[mid] > target)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    std::vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        input.push_back(x);
    }
    int target;
    cin >> target;
    cout << findTargetInx(input, target);
    return 0;
}