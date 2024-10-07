#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A()
    {
        a = 0;
    }
    A(int x)
    {
        a = x;
    }
    void operator+=(A obj)
    {
        a = a + obj.a;
    }
    void disp()
    {
        cout << "value of a=" << a << endl;
    }
};

int main()
{
    A obj1(10), obj2(20);
    obj1 += obj2;
    obj1.disp();
    return 0;
}