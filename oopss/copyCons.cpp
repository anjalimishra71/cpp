#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }

    Number(Number &obj)
    {
        cout << "copy constructor !!";
        a = obj.a;
    }
    void show()
    {
        cout << a;
    }
};
int main()
{
    Number obj, obj1(22), obj2(obj1), z2;
    obj2.show();
    z2 = obj; // copy constructor is not called
    z2.show();
    Number z3 = obj1;
    return 0;
}