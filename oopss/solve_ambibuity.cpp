#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "how are you?" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base2::greet();
    }
};
class b
{
    int a;

public:
    void say()
    {
        cout << "good morning" << endl;
    }
};
class d : public b
{
    int b;

    /*public:
        void say()
        {
            cout << "good night" << endl;
        }
    */
};
int main()
{
    // ambibuity 1
    /*  base1 obj1;
      obj1.greet();
      base2 obj2;
      obj2.greet();
      derived d;
      d.greet();
  */
    // ambibuity 2
    b a;
    a.say();

    d b;
    b.say();
    return 0;
}