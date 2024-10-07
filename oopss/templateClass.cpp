#include <iostream>
using namespace std;

template <class T>
class tempClass
{
public:
    tempClass(T x)
    {
        cout << "x=" << x << endl;
    }
};
int main()
{
    tempClass<int> obj1(10);
    tempClass<float> obj2(3.44f);
    tempClass<char> obj3('A');
    return 0;
}