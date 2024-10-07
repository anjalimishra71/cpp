#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "constructor called" << count << endl;
    }
    ~num()
    {
        cout << "destructor called" << count << endl;
        count--;
    }
};

int main()
{
    num n1;
    {
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "exiting this block" << endl;
    }
    cout << "back to main" << endl;
    num n2;
    return 0;
}