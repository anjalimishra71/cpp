#include <iostream>
using namespace std;
template <class T>
class tempclass
{
public:
    T largest(T x, T y)
    {
        return x > y ? x : y;
    }
};

int main()
{
    tempclass<int> obj1;
    tempclass<float> obj2;

    tempclass<char> obj3;
    cout << "largest=" << obj1.largest(10, 40) << endl;
    cout << "largest=" << obj2.largest(10.33, 3.44) << endl;
    cout << "largest=" << obj3.largest('a', 'b') << endl;
    return 0;
}