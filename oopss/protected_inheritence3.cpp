#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
class derived : protected base
{
public:
    void show()
    {
        a = 10;
        // b = 20;
        cout << a << " ";
    }
};

int main()
{
    derived d;
    d.show();

    return 0;
}