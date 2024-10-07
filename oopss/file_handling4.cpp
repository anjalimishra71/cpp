#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char fname[30], ch;
    int opt;
    ifstream file1;
    ofstream file2;
    ofstream file3;
   
    cout << "enter filename";
    cin >> fname;
    file1.open(fname, ios::in);
    file2.open("upper.txt", ios::out);
    file3.open("lower.txt", ios::out);
    while (!file1.eof())
    {
        file1 >> ch;
        if (ch >= 97 && ch <= 122)
        {
            file3 << ch;
        }
        else
            file2 << ch;
    }
    cout << fname << "file is encrypted into encrypted file" << endl;
    file1.close();
    file2.close();
       
    return 0;
}