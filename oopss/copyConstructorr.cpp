#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    A(A &temp)
    {
        a = temp.a;
        b = temp.b;
    }
    void show()
    {
        cout << "value of a=" << a << "and b=" << b << endl;
    }
};
int main()
{
    A obj1(5, 10);
    obj1.show();
    A obj2(obj1);
    obj2.show();
    return 0;
}