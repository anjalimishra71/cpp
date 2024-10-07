#include <iostream>
using namespace std;
class A
{
    int a;
    friend class B;

public:
    A(int x)
    {
        a = x;
    }
};
class B
{
public:
    void disp()
    {
        A obj(400);
        cout << "value of a=" << obj.a;
    }
};
int main()
{
    B obj2;
    obj2.disp();
    return 0;
}