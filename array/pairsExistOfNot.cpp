#include <iostream>
using namespace std;
int main()
{
  int a[] = {-2, -1, 0, 3, 6, 8, 11, 12};
  int x = 15;
  int n = 8;

  int i = 0;
  int j = n - 1;
  bool found = false;
  while (i < j)
  {
    if (a[i] + a[j] == x)
    {
      found = true;
      break;
    }
    else if (a[i] + a[j] < x)
    {
      i++;
    }
    else
      j--;
  }
  if (found == true)
    cout << "yes";
  else
    cout << "no";
  return 0;
}