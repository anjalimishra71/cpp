#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setno(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "a=" << a;
    }
};
int main()
{
    A obj[5];
    for (int i = 0; i < 5; i++)
    {
        obj[i].setno(i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        obj[i].show();
    }

    return 0;
}