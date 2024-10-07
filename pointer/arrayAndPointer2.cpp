#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 4, 5, 6, 7};
    int *ptr = (arr + 2);
    cout << *ptr << endl;
    *ptr++;
    cout << *ptr << endl;
    *ptr--;
    cout << *ptr << endl;
    return 0;
}