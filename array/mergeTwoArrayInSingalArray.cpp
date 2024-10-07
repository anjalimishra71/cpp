#include <iostream>
using namespace std;
int main()
{
    int s1;
    cout << "enter size";
    cin >> s1;
    int a[s1];
    cout << "enter array element";
    for (int i = 0; i < s1; i++)
    {
        cin >> a[i];
    }
    int s2;
    cout << "enter size";
    cin >> s2;

    int b[s2];
    cout << "enter array ele";
    for (int i = 0; i < s2; i++)
    {
        cin >> b[i];
    }

    int c[s1 + s2];
    int j = 0;
    for (int i = 0; i < s1; i++)
    {
        c[j] = a[i];
        j++;
    }
    for (int i = 0; i < s2; i++)
    {
        c[j] = b[i];
        j++;
    }
    // int k = 6;
    for (int i = 0; i < j; i++)
    {
        for (int k = i + 1; k < j; k++)
        {
            if (c[i] > c[k])
            {
                int temp = c[i];
                c[i] = c[k];
                c[k] = temp;
            }
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}