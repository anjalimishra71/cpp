#include <iostream>
using namespace std;
bool checkeligible(int age, int limit)
{
    if (age >= limit)
        return true;
    else
        return false;
}
int main()
{
    int age;
    cout << "enter age of person";
    cin >> age;
    int limit;
    cout << "enter limit";
    cin >> limit;
    int is_eligible_for_voting = checkeligible(age, limit);
    if (is_eligible_for_voting)
        cout << "yes,the current person is eligible for voting";
    else
        cout << "no,this person is not eligibal for voting";
    return 0;
}