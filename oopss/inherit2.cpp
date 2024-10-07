#include <iostream>
using namespace std;
class parent
{
public:
    int a;
    void setno(int x)
    {
        a = x;
    }
};
class child : public parent
{
public:
    void check_buzz()
    {
        if (a % 7 == 0 || a % 10 == 7)
        {
            cout << "buzz num";
        }
        else
        {
            cout << "not buzz num";
        }
    }
};
int main()
{
    child c1;
    int x;
    cout << "enter any num";
    cin >> x;
    c1.setno(x);
    c1.check_buzz();
    return 0;
}