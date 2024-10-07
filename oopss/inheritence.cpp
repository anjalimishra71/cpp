#include <iostream>
using namespace std;
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.5;
    }
    Employee() {}
};
class Progremmer : public Employee
{
public:
    Progremmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee anjali(1), ekta(2);
    cout << anjali.salary << endl;
    cout << ekta.salary << endl;
    Progremmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}