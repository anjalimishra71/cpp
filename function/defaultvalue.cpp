#include <iostream>
using namespace std;
void fun(int x, int y = 2, int z = 5)
{
    cout << x << " " << y << " " << z << endl;
}
int main()
{
    fun(1, 8);
    return 0;
}