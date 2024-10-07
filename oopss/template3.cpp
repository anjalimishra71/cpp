#include<iostream>
using namespace std;

template <class T1=int,class T2=float>
class anjali{
  public:
  T1 data1;
  T2 data2;
  anjali(T1 a,T2 b){
    data1=a;
    data2=b;
  }
    void display(){
        cout<<data1<<endl<<data2;;
    }
};
int main(){
   anjali<>obj(10,'A');
   obj.display();
    return 0;
}