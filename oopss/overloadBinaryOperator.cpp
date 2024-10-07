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
    A operator+(A obj)
    {
        A tmp;
        tmp.a = a + obj.a;
        return tmp;
    }
    void disp()
    {
        cout << "value of a=" << a << endl;
    }
};

int main()
{
    A obj1(50), obj2(10), obj3;
    obj1.disp();
    obj2.disp();
    obj3.disp();
    obj3 = obj1 + obj2; // obj1.operator+(obj2)
    obj3.disp();
    return 0;
}