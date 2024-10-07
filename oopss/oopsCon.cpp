#include <iostream>
using namespace std;
class emp
{
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int a2, int a3);
    void getData()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
        cout << "d=" << d << endl;
        cout << "e=" << e;
    }
};
void emp::setData(int a1, int a2, int a3)
{
    a = a1;
    b = a2;
    c = a3;
}

int main()
{
    emp obj;
    obj.d = 4;
    obj.e = 5;
    obj.setData(1, 2, 3);
    obj.getData();
    return 0;
}