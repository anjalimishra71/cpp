#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "No parameter" << endl;
    }
    test(int x, int y)
    {
        cout << "Product is=" << (x * y) << endl;
    }
    test(float x, float y)
    {
        cout << "sum is=" << x + y;
    }
};
int main()
{
    test obj1, obj2(10.5f, 20.5f), obj(10, 20);

    return 0;
}