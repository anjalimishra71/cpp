#include <iostream>
using namespace std;
bool checkPalindrom(int num, int *temp)
{
    if (num >= 0 && num <= 9)
    {
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }
    bool result = (checkPalindrom(num / 10, temp) and (num % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}
int main()
{
    int num = 12621;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout << checkPalindrom(num, temp);
    return 0;
}