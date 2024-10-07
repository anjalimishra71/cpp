#include <iostream>
using namespace std;
string occFun(string &s, int idx, int n)
{
    if (idx == n)
        return "";
    string curr = "";
    curr += s[idx];
    return ((s[idx] == 'a') ? "" : curr) + occFun(s, idx + 1, n);
}
int main()
{
    string s = "abcax";
    int n = 5;
    cout << occFun(s, 0, n);
    return 0;
}