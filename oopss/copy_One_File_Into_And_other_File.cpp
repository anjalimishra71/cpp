#include<iostream>
#include<fstream>
using namespace std;
int main(){
char fname[30],ch;
ifstream file1;
ofstream file2;
cout<<"enter file name";
cin>>fname;
file1.open(fname,ios::in);
file2.open("anj.txt",ios::out);
while(!file1.eof()){
    file1>>ch;
    file2<<ch;
}
cout<<"file is copyed";
    return 0;
}