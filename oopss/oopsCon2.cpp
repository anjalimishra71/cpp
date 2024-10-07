#include <iostream>
using namespace std;
class shop
{
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void getPrice();
    void displayPrice();
};
void shop::getPrice()
{
    cout << "enter id of your item";
    cin >> itemId[counter];
    cout << "enter price of your item";
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << itemId[i] << " " << itemPrice[i];
    }
}
int main()
{
    int n;
    cin >> n;
    shop dukan;
    dukan.initcounter();
    //   dukan.getPrice();
    //  dukan.getPrice();
    for (int i = 0; i < n; i++)
    {
        dukan.getPrice();
    }
    dukan.displayPrice();
    return 0;
}