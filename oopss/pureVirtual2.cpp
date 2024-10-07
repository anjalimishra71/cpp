#include <iostream>
using namespace std;
class shape
{
protected:
    int l, b;

public:
    virtual void area(int, int) = 0;
};
class square : public shape
{
public:
    void area(int a, int c)
    {
        l = a;
        b = c;
        cout << "area of square is=s*s=" << l * b << endl;
    }
};
class rectangle : public shape
{
public:
    void area(int a, int c)
    {
        l = a;
        b = c;

        cout << "area of rectangle=l*b=" << l * b << endl;
    }
};
class triangle : public shape
{
public:
    void area(int a, int c)
    {
        l = a;
        b = c;

        cout << "area of triagle=(l*b)/2=" << (l * b) / 2 << endl;
    }
};
int main()
{
    square s;
    rectangle r;
    triangle t;
    s.area(2, 3);
    r.area(2, 3);
    t.area(2, 3);
    return 0;
}