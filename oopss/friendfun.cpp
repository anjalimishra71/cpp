#include <iostream>
using namespace std;
class A
{
    int a;
    friend void sum();
};
class B
{
    int b;
    friend void sum();
};
void sum()
{
    int c;
    A obj1;
    B obj2;
    cout << "enter 2 num";
    cin >> obj1.a >> obj2.b;
    c = obj1.a + obj2.b;
    cout << "sum of" << obj1.a << "and" << obj2.b << "is" << c;
}
int main()
{
    sum();
    return 0;
}