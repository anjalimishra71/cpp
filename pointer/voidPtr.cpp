#include <iostream>
using namespace std;
int main()
{
    float f = 3.4;
    int a = 10;
    void *ptr = &f;
    ptr = &a;
    int *integerpointer = (int *)ptr;
    cout << *integerpointer << endl;
    return 0;
}