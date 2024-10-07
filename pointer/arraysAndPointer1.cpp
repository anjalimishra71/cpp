#include <iostream>
using namespace std;
void process(int *a, int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //   cout << *(a + i) << endl;
    //}

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    *(a + 1) = 33;
}

int main()
{
    int a[] = {3, 5, 8};
    int n = 3;
    process(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}