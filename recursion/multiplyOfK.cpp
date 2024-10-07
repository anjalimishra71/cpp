#include <iostream>
using namespace std;
void multiply(int num, int k)
{
    if (k == 0)
    {
        return;
    }
    multiply(num, k - 1);
    cout << num * k << endl;
}
int main()
{
    int num = 12;
    int k = 5;
    multiply(num, k);
    return 0;
}