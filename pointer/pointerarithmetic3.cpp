#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 7};
    int *ptr = &a[0];
    cout << ++*ptr << endl;
    cout << a[0] << " " << a[1];
    return 0;
}
