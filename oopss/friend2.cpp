#include <iostream>
#include <tgmath.h>
using namespace std;
class Y;
class X
{
    int data1;
    int data2;
    friend void sum(X, Y);

public:
    void setValue(int value1, int value2)
    {
        data1 = value1;
        data2 = value2;
    }
};
class Y
{
    int num1;
    int num2;

public:
    void setValue(int value1, int value2)
    {
        num1 = value1;
        num2 = value2;
    }
    friend void sum(X, Y);
};
void sum(X o1, Y o2)
{
    cout << sqrt(((o1.data2 - o1.data1) * (o1.data2 - o1.data1)) + ((o2.num2 - o2.num1) * (o2.num2 - o2.num1)));
}
int main()
{
    X a1;
    a1.setValue(5, 8);

    Y a2;
    a2.setValue(6, 10);

    sum(a1, a2);
    return 0;
}