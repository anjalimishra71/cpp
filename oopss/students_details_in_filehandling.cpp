#include <iostream>
#include <fstream>
using namespace std;
void show_students();
char c[10], n[10];
int a;
int main()
{
    fstream fobj;
int a;
    do{
    fobj.open("college.txt", ios::app);
    cout << "enter name:";
    cin >> n;
    cout << "enter course:";
    cin >> c;
    cout << "enter age";
    cin >> a;
    fobj << n << "\t" << c << "\t" << a << endl;
    cout << "Record has been saved" << endl;
    cout<<"yes or no";
    cin>>a;
    }while(a!=1);
    
    fobj.close();
    show_students();
    return 0;
}
void show_students()
{
    fstream file;
    file.open("college.txt", ios::in);
    cout << "name\tcourse\tage" << endl;
    cout << "---------------------" << endl;
    while (!file.eof())
    {
        file >> n >> c >> a;
        // if (file.eof())
        // {
        //     break;
        // }
       // else
            cout << n << "\t" << c << "\t" << a << endl;
    }
    file.close();
}