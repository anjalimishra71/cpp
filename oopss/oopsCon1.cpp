#include <iostream>
#include <string>
using namespace std;
class A
{
    string s;

public:
    void input();
    void checkBinary();
    void display();
    void oppOnesAndZeros();
};
void A::input()
{
    cout << "enter number";
    cin >> s;
}
void A::checkBinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "this is not binary num";
            exit(0);
        }
    }
}
void A::oppOnesAndZeros()
{
    checkBinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void A::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    A obj;
    obj.input();
    // obj.checkBinary();
    obj.oppOnesAndZeros();
    obj.display();
    return 0;
}