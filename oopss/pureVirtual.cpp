#include <iostream>
using namespace std;
class p
{
public:
    virtual void print() = 0;
    void show()
    {
        cout << "welcome in virtual function" << endl;
    }
};
class c : public p
{
    void print()
    {
        cout << "defined by child" << endl;
    }
};
int main()
{
    p *obj1;
    c obj2;
    obj1 = &obj2;
    obj1->print();
    obj1->show();
    return 0;
}