#include <iostream>
using namespace std;
class A
{
    int a;

protected:
    int b;

public:
    int c;
    A()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    void disp()
    {
        cout << "parent class a=" << a << "b=" << b << "c =" << c << endl;
    }
};
class B : protected A
{
public:
    void show()
    {
        //  a = 100;
        b = 200;
        c = 300;
        cout << "child class b=" << b << "c=" << c << endl;
    }
};
int main()
{
    A obj1;
    B obj2;

    obj1.disp();
    obj2.show();

    return 0;
}