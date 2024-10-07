#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A created";
    }
};
class B : public A
{
public:
    B()
    {
        cout << "B created";
    }
};
class C : public B
{
public:
    C()
    {
        cout << "C created";
    }
};
int main()
{
    C obj;
    return 0;
}