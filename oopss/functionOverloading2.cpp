#include <iostream>
using namespace std;
class overload
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return sum(a, b) + c;
    }
    int sum(int a, int b, int c, int d)
    {
        return sum(a, b, c) + d;
    }
};
int main()
{
    overload obj;
    cout << "sum is=" << obj.sum(10, 20) << endl;
    cout << "sum is=" << obj.sum(10, 20, 30, 40) << endl;
    return 0;
}