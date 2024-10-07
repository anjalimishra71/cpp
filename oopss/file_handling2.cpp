#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  fstream fobj;
  char str[50];
  int ch;
  cout << "press 1 if you want to write and press 2 if you want to read" << endl;
  cin >> ch;
  fflush(stdin);
  switch (ch)
  {
  case 1:
    fobj.open("iics.txt", ios::app);
    cout << "enter any string" << endl;
    cin.getline(str, 50);
    fobj << str << endl;
    fobj.close();
    cout << "file is write" << endl;
    break;
  case 2:
    fobj.open("iics.txt", ios::in);
    cout << "file content is:" << endl;
    while (!fobj.eof())
    {
      fobj.getline(str, 50);
      cout << str << endl;
    }
    break;
  }
  return 0;
}
