#include <iostream>
#include <vector>
#include <string>
using namespace std;
string longestCommonPrefix(vector<string> &str)
{
    sort(str.begin(), str.end());
    string s1 = str[0];
    int i = 0;
    string s2 = str[str.size() - 1];
    int j = 0;
    string ans = "";
    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] == s2[j])
        {
            ans += s1[i];
            i++;
            j++;
        }
        else
            break;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter no of string";
    cin >> n;
    cout << "enter string";
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cout << "largest common prefix" << longestCommonPrefix(str) << endl;
    return 0;
}
