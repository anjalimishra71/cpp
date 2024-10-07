#include <iostream>
using namespace std;
class student
{
    int roll_num;

public:
    void set_roll_num(int);
    void get_roll_num();
};
void student::set_roll_num(int r)
{
    roll_num = r;
}
void student::get_roll_num()
{
    cout << roll_num << endl;
}
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << maths << endl;
    cout << physics << endl;
}
class Result : public Exam
{
    int percentage;

public:
    void display()
    {
        get_roll_num();
        get_marks();
        cout << "percentage is:" << (maths + physics) / 2 << endl;
    }
};
int main()
{
    Result anjali;
    anjali.set_roll_num(420);
    anjali.set_marks(94.2, 90.0);
    anjali.display();
    return 0;
}