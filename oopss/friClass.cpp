#include <iostream>
using namespace std;
class complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumSecComplex(complex, complex);
};
class complex
{
    int a, b;
    //  friend int Calculator::sumRealComplex(complex, complex);
    // friend int Calculator::sumSecComplex(complex, complex);
    friend class Calculator;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};
int Calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumSecComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNum(1, 4);
    o2.setNum(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is" << res << endl;
    int s = calc.sumSecComplex(o1, o2);
    cout << s;
    return 0;
}