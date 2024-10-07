#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isAnagram(string s1, string s2)
{
    // create freq array
    vector<int> freq(26, 0);

    // if length are different for s1,s2 toh return true
    if (s1.length() != s2.length())
    {
        return false;
    }
    // store frequency of character in s1 and s2
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++; // for s1, we are incrementing freq in char
        freq[s2[i] - 'a']--; // for s2, we are decrementing freq in char
    }
    // checking if freq of every char is 0
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return false; // not anagram
        }
    }
    return true;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (isAnagram(s1, s2))
    {
        cout << "strings are anagram" << endl;
    }
    else
    {
        cout << "string are not anagram";
    }
    return 0;
}