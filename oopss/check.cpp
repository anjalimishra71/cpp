#include <iostream>
using namespace std;
class A
{
    int x;

public:
    void input()
    {
        cout << "enter number";
        cin >> x;
    }
    void check()
    {
        if (x % 2 == 0)
            cout << x << "is even num" << endl;
        else
            cout << x << "is odd num" << endl;
    }
    void checkbuzz()
    {
        if (x % 7 == 0 || x % 10 == 7)
            cout << x << "buzz num" << endl;
        else
            cout << x << "not buzz num" << endl;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.check();
    obj.input();
    obj.checkbuzz();
    return 0;
}