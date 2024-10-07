#include <iostream>
#include <vector>
using namespace std;
void subSequence(string &str, int i, string result, vector<string> &li)
{
    if (i == str.length())
    {
        li.push_back(result);
        return;
    }
    subSequence(str, i + 1, result + str[i], li);
    subSequence(str, i + 1, result, li);
}
int main()
{
    vector<string> res;
    string str = "abc";
    subSequence(str, 0, "", res);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}