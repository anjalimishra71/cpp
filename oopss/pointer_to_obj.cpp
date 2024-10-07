#include <iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;

public:
    void getData()
    {
        cout << real << endl;
        cout << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    //  complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    //  (*ptr).setData(3, 7);
    ptr->setData(3, 7);
    (*ptr).getData();
    return 0;
}