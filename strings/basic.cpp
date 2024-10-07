#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    // string s1 = "anjali";
    // string s2 = "mishra";
    // s1 += s2;//s2 is getting appended after s1
    // s1=s1+s2; copy string created for s1(extra space for creating copy)
    // << s1 + s2 << endl;
    // cout << s1 << endl;

    /**   string s1 = "abcd";
       char ch = 'e';
       s1.push_back(ch);
       cout << s1;**/

    /*  string s1 = "abcde";
      cout << s1.size() << endl;
      cout << s1.length() << endl;
      char ch[20] = "abcde";
      cout << strlen(ch) << endl;
      */

    int num = 432;
    string str = to_string(num);
    str += "1";
    cout << str << endl;
    cout << str[1];
    return 0;
}