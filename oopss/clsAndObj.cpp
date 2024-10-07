#include <iostream>
using namespace std;
class xyz
{
private:
    int a, b, c;

public:
    void input(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum()
    {
        c = a + b;
        cout << "sum is=" << c;
    }
};
int main()
{
    xyz obj1, obj2;
    obj1.input(4, 5);
    obj1.sum();
    obj2.input(1, 2);
    obj2.sum();
    return 0;
}