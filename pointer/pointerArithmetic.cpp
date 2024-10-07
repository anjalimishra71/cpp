#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    double dec = 20;
    int *ptr = &x;
    double *pd = &dec;
    cout << "size of x"
         << " " << sizeof(x) << endl;
    cout << ptr << " " << (ptr + 1);

    cout << "size of dec"
         << " " << sizeof(dec) << endl;
    cout << pd << " " << (pd + 2) << " " << (pd - 1);

    return 0;
}