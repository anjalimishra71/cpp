#include <iostream>
using namespace std;
int avail = 0, create = 0;
class A
{
public:
    A()
    {
        avail++;
        create++;
    }
    ~A()
    {
        avail--;
        cout << "destructor" << endl;
    }
    void disp()
    {
        cout << "created:" << create << "and available:" << avail << endl;
    }
};
int main()
{
    A obj1, obj2;
    obj1.disp();
    {
        A obj3, obj4;
        obj4.disp();
    }
    obj1.disp();
    {
        A obj5;
        obj5.disp();
    }
    obj2.disp();
    cout << "exit the loop" << endl;
    return 0;
}