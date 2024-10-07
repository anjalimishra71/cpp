#include <iostream>
using namespace std;
class A
{
public:
    ~A()
    {
        cout << "A deleted";
    }
};
class B : public A
{
public:
    ~B()
    {
        cout << "B deleted";
    }
};
class C : public B
{
public:
    ~C()
    {
        cout << "C deleted";
    }
};
int main()
{
    C obj;
    return 0;
}