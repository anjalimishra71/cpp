#include <iostream>
using namespace std;
class student
{
protected:
    int roll_num;

public:
    void set_number(int a)
    {
        roll_num = a;
    }
    void print_number()
    {
        cout << "your roll num is:" << roll_num << endl;
    }
};
class Test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "maths=" << maths << " "
             << "physics=" << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "your pt score is" << score << endl;
    }
};
class Result : public Test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is:" << total << endl;
    }
};
int main()
{
    Result anj;
    anj.set_marks(78.9, 99.5);
    anj.set_number(420);
    anj.set_score(9);
    anj.display();
    return 0;
}