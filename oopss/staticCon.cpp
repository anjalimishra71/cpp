#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData();
    void getData();
    static void getCount(void)
    {
        cout << "The value of count is" << count << endl;
    }
};
void Employee::setData()
{
    cout << "enter the id";
    cin >> id;
    count++;
}
void Employee::getData()
{
    cout << id << " "
         << "and this is employee num" << count;
}
int Employee::count; // default value is 0
int main()
{
    Employee anjali, ekta, shipali;

    anjali.setData();
    anjali.getData();
    Employee::getCount();
    ekta.setData();
    ekta.getData();

    shipali.setData();
    shipali.getData();

    return 0;
}