#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex()
    {
        x = 0;
        y = 0;
    }
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    complex(int a)
    {
        x = a;
        y = 0;
    }
    void display()
    {
        cout << x << "+" << y << "i" << endl;
    }
};

int main()
{
    complex obj1(10, 20), obj2(3), obj;
    obj1.display();
    obj2.display();
    obj.display();
    return 0;
}