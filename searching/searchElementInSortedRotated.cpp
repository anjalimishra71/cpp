#include <iostream>
#include <vector>
using namespace std;

int findTarget(vector<int> &input, int target)
{
    int l = 0, r = input.size() - 1;
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (input[mid] == target)
            return mid;
        if (input[l] == input[r])
        {
            l++;
            r--;
        }

        else if (input[mid] < target)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
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
    int target = 2;
    cout << findTarget(input, target);
    return 0;
}