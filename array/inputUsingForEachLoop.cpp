#include <iostream>
using namespace std;
int main()
{
    char vowels[5];
    // for (int idx = 0; idx < 5; idx++)
    // {
    //     cin >> vowels[idx];
    // }
    for (char &element : vowels)
    {
        cin >> element;
    }
    for (char idx = 0; idx < 5; idx++)
    {
        cout << vowels[idx] << endl;
    }
    return 0;
}