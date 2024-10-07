#include <iostream>
using namespace std;
class Inlinedemo
{
    int i, t;

public:
    inline void print_table(int n)
    {
        for (i = 1; i <= 10; i++)
        {
            t = n * i;
            cout << n << "*" << i << "=" << t << endl;
        }
    }
    // void disp();
};
// void Inlinedemo::disp()
//{
//   cout << "it is normal function";
//}
int main()
{
    Inlinedemo obj;
    obj.print_table(5);
    // obj.disp();
    return 0;
}