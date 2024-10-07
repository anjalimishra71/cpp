#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout << "enter 5 elements";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    bool sortedflag = true;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] <= v[i - 1])
        {
            sortedflag = false;
        }
    }
    cout << sortedflag;
    return 0;
}