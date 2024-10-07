#include <iostream>
using namespace std;
class text2
{
    int a, b, c;

public:
    void mult();
    void input(int, int);
};
void text2 ::input(int x, int y)
{
    a = x;
    b = y;
}
void text2::mult()
{
    c = a * b;
    cout << "product is" << c << endl;
}
int main()
{
    text2 obj1, obj2;
    obj1.input(4, 5);
    obj1.mult();
    obj2.input(1, 2);
    obj2.mult();
    return 0;
}