#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int);
    void display()
    {
        cout << a << "+" << b << "i";
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex obj(2, 4);
    obj.display();
    return 0;
}