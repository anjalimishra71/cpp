#include <iostream>
using namespace std;
template <class T1, class T2>
void swap(T1 x, T2 y)
{
   x=x+y;
   y=x-y;
   x=x-y;
    cout << "swap=" << x << " " << y << endl;
}
int main()
{
    swap(5.2f,3);
    return 0;
}