#include<iostream>
#include<fstream>
using namespace std;
int main(){
   ofstream fobj;
   char str[50];
   fobj.open("iics.txt",ios::out);
   cout<<"enter any string"<<endl;
   cin>>str;
   fobj<<str;
   fobj.close();
   cout<<"file is write"<<endl;
    return 0;
}