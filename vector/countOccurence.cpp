#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout << "enter the 5 elements" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "enter x num";
    cin >> x;
    int occurence = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (x == v[i])
            occurence++;
    }
    cout << x << "=" << occurence;
    return 0;
}