#include <iostream>
using namespace std;
class B;
class A
{
    int num1;
    friend void exchange(A &, B &);

public:
    void inData(int a)
    {
        num1 = a;
    }
    void display()
    {
        cout << num1 << endl;
    }
};
class B
{
    int num2;
    friend void exchange(A &, B &);

public:
    void inData(int b)
    {
        num2 = b;
    }
    void display()
    {
        cout << num2 << endl;
    }
};
void exchange(A &a, B &b)
{
    int temp = a.num1;
    a.num1 = b.num2;
    b.num2 = temp;
}
int main()
{
    A o1;
    o1.inData(2);
    B o2;
    o2.inData(3);
    exchange(o1, o2);
    o1.display();
    o2.display();
    return 0;
}