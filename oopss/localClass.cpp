#include <iostream>
using namespace std;
void welcome()
{
    class Lclass
    {
    public:
        void display()
        {
            cout << "i am local class function";
        }
    } obj;
    // Lclass obj;
    obj.display();
}
int main()
{
    welcome();
    return 0;
}