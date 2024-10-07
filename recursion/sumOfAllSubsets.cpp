#include <iostream>
#include <vector>
using namespace std;
void sumOfSubsets(int arr[], int n, int i, int sum, vector<int> &result)
{
    if (i == n)
    {
        result.push_back(sum);
        return;
    }
    sumOfSubsets(arr, n, i + 1, sum + arr[i], result); // pick the element
    sumOfSubsets(arr, n, i + 1, sum, result);          // donot pick the element
}

int main()
{
    int arr[] = {2, 4, 5};
    int n = 3;
    vector<int> result;
    sumOfSubsets(arr, n, 0, 0, result);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}