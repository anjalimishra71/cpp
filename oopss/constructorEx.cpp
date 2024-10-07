#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor is called" << endl;
    }
    void printData1()
    {
        cout << "the value of data1 is" << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor is called" << endl;
    }
    void printData2()
    {
        cout << "the value of data2 is" << data2 << endl;
    }
};
class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived claa constructor is called" << endl;
    }
    void printData()
    {
        cout << "derived1 is:" << derived1 << endl;
        cout << "derived2 is:" << derived2 << endl;
    }
};
int main()
{
    derived anj(1, 2, 3, 4);
    anj.printData1();
    return 0;
}