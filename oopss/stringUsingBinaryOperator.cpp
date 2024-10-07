#include <iostream>
#include <string.h>
using namespace std;
class stringg
{
public:
    char *str;
    stringg()
    {
        strcpy(str, "");
    }
    stringg(char *x)
    {
        strcpy(str, x);
    }
    stringg operator+(stringg obj)
    {
        stringg tmp;
        strcpy(tmp.str, str);
        strcat(tmp.str, obj.str);
        return tmp;
    }
    void disp()
    {
        cout << "string value is =" << str << endl;
    }
};
int main()
{
    stringg s1("anjali"), s2("mishra"), s3;
    s3 = s1 + s2;
    s3.disp();

    return 0;
}