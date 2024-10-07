#include <iostream>
using namespace std;
class simple
{
    int a, b;

public:
    simple(int x, int y = 1)
    {
        a = x;
        b = y;
    }
    void print();
};
void simple::print()
{
    cout << a << " " << b;
}
int main()
{
    simple obj(10);
    obj.print();
    return 0;
}