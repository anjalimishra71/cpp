#include <iostream>
using namespace std;
int main()
{
    int a[2] = {1, 5};
    int *ptr = &a[0];
    cout << ptr << " " << *ptr << endl;
    cout << (ptr + 1) << " " << *(ptr + 1) << endl;

    // cout << *ptr++ << endl;
    // cout << *ptr++ << endl;

    cout << a[0] << " " << a[1] << endl;
    return 0;
}