#include <iostream>
#include <string.h>
using namespace std;
class overload
{
public:
    void sum(int a, int b)
    {
        cout << "int sum is :" << a + b << endl;
    }
    void sum(float a, float b)
    {
        cout << "float sum is:" << a + b << endl;
    }
    void sum(double a, double b)
    {
        cout << "double sum is:" << a + b << endl;
    }
    void sum(char *a, char *b)
    {
        cout << " string sum is:" << b << endl;
    }
};
int main()
{
    overload obj;
    obj.sum(10, 20);
    obj.sum(2.1, 0.2);
    obj.sum(1.1f, 0.1f);
    obj.sum("super", "man");

    return 0;
}