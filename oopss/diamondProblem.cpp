#include <iostream>
using namespace std;
class parent
{
public:
    parent()
    {
        cout << "i am parent" << endl;
    }
};
class child1 : public parent
{
public:
    child1()
    {
        cout << "i am child1" << endl;
    }
};

class child2 : public parent
{
public:
    child2()
    {
        cout << "i am child2" << endl;
    }
};

class grandchild : public child1, public child2
{
public:
    grandchild()
    {
        cout << "i am grandchild" << endl;
    }
};
int main()
{
    grandchild c;
    return 0;
}