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
    A operator++()
    {
        A tmp;
        tmp.a = ++a;
        return tmp;
    }
    void print()
    {
        cout << "value of a=" << a << endl;
    }
};
int main()
{
    A obj1, obj2(10);
    obj1.print();
    obj2.print();
    obj2 = ++obj1;
    obj2.print();
    obj2 = ++obj1;
    obj2.print();
    obj2 = ++obj1;
    obj2 = ++obj1;
    obj2.print();

    return 0;
}