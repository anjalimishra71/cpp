#include<iostream>
using namespace std;
template <class T1>
void swapp(T1 &a,T1 &b){
    T1 temp=a;
    a=b;
    b=temp;
    
}
float functionAvg(int a,int b){
    return (a+b)/2.0;
}

int main(){
    cout<<functionAvg(4,5)<<endl;
    int a=3,b=5;
    swapp(a,b);
    cout<<a<<endl<<b;
    return 0;
}