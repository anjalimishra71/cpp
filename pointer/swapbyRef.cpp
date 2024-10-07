#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    int *p1 = &a;
    int *p2 = &b;
    swap(p1, p2);
    cout << *p1 << " " << *p2;
    return 0;
}