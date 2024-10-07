#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A();
    void display()
    {
        cout << a << " " << b;
    }
};
A::A()
{
    a = 1;
    b = 4;
}
int main()
{
    A obj;
    obj.display();
    return 0;
}