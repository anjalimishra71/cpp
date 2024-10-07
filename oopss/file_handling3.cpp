#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  char fName[30], ch;
  int val;
  ifstream file1;
  cout << "enter filename";
  cin >> fName;
  file1.open(fName, ios::in);

  while (!file1.eof())
  {
    file1 >> ch;
    if (file1.eof())
      break;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch=='A'||ch=='E' ||ch=='I'||ch=='O'||ch=='U')
    {
      val++;
    }
  }

  cout << "total vawels:" << val << endl;
  file1.close();
  return 0;
}