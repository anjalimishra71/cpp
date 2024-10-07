#include <iostream>
using namespace std;
class prime
{
    int x;

public:
    void primeNum();
    void input(int);
};
void prime::input(int a)
{
    x = a;
}
void prime::primeNum()
{
    int f = 0;
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "number is prime";
    }
    else
        cout << "number is not prime";
}
int main()
{
    prime obj1;
    obj1.input(6);
    obj1.primeNum();
    return 0;
}