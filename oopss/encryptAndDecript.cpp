#include<iostream>
#include<fstream>
using namespace std;
int main(){
  char fname[30],ch;
  int opt;
  ifstream file1;
  ofstream file2;
  cout<<"select option for :1 encrypt and :2 decrypt";
  cin>>opt;
  if(opt==1){
    cout<<"enter filename";
    cin>>fname;
    file1.open(fname,ios::in);
    file2.open("encrypt.txt",ios::out);
    while (!file1.eof())
    {
      file1>>ch;
      ch=ch+39;
      file2<<ch;
    }
    cout<<fname<<"file is encrypted into encrypted file"<<endl;
    file1.close();
    file2.close();
  }   
   else if(opt==2){
    file1.open("encrypt.txt",ios::in);
    while(!file1.eof()){
      file1>>ch;
      ch=ch-39;
      cout<<ch;
    }
    file1.close();
   }
    return 0;
}