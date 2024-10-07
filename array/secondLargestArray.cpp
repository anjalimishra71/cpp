#include <iostream>
using namespace std;
int largestElementIndex(int array[], int size)
{
    int max = INT_MIN;
    int maxIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
int main()
{
    int array[] = {2, 3, 5, 7, 6, 1, 7};
    int n = 7;
    int indexOflargest = largestElementIndex(array, n);
    int largestElement = array[indexOflargest];
    // array[indexOflargest] = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == largestElement)
        {
            array[i] = -1;
        }
    }
    int indexOfSecondLargest = largestElementIndex(array, n);
    cout << array[indexOfSecondLargest];
    return 0;
}