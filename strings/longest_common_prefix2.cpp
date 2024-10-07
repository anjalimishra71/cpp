#include <iostream>
#include <vector>
#include <string>
using namespace std;
string longestCommonPrefix(vector<string> &str)
{
    string s1 = str[0];
    int ans_length = s1.size();
    for (int i = 1; i < str.size(); i++)
    {
        int j = 0;
        while (j < s1.size() && j < str[i].size() && s1[j] == str[i][j])
            j++;
        ans_length = min(ans_length, j);
    }
    string ans = s1.substr(0, ans_length);
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
