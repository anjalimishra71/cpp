#include <iostream>
using namespace std;
int square(int r)
{
    return r * r;
}
double area(int r)
{
    return 3.14 * square(r);
}
double circumference(int r)
{
    return 2 * 3.14 * r;
}
int main()
{
    int r;
    cout << "enter radius";
    cin >> r;
    cout << area(r) << endl
         << circumference(r);
    return 0;
}