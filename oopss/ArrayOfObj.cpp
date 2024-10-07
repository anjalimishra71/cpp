#include <iostream>
using namespace std;
class A
{
  int a;

public:
  void setNo(int x)
  {
    a = x;
  }
  void show()
  {
    cout << "a=" << a << endl;
  }
};
int main()
{
  A obj[5];
  for (int i = 0; i < 5; i++)
  {
    obj[i].setNo(i + 1);
  }
  for (int i = 0; i < 5; i++)
  {
    obj[i].show();
  }
  return 0;
}