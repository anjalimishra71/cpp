#include <iostream>
#include <vector>
using namespace std;
int binarySearchSortedRotated(vector<int> &input, int target)
{
    // time:o(logn)
    // space:o(1)
    int lo = 0, hi = input.size() - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] == target)
            return mid;
        if (input[mid] >= input[lo])
        {
            if (target >= input[lo] and target <= input[mid])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        else
        {
            if (target >= input[mid] && target <= input[hi])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
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
    int target = 4;
    cout << binarySearchSortedRotated(input, target);
    return 0;
}