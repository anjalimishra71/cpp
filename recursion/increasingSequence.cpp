#include <iostream>
using namespace std;
void increasingSeq(int n)
{
    if (n <= 0)
        return;
    increasingSeq(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    increasingSeq(n);
    return 0;
}