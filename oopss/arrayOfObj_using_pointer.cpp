#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "id=" << id;
        cout << "price=" << price;
    }
};
int main()
{
    int size = 2;
    shop *ptr = new shop[size];
    shop *tmpptr = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "enter id and prize of items:" << i + 1;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        tmpptr->getData();
        tmpptr++;
    }
    return 0;
}