#include<iostream>
using namespace std;
template<class T>
class Anjali{
public:
   T data;
   Anjali(T a){
    data=a;
   }
   void display();
};
template<class T>
void Anjali<T>::display(){
    cout<<data;
}
void func(int a){
    cout<<"I am first func"<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am template function"<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"I am second template function"<<a<<endl;
}

int main(){
// Anjali<int> a(3);
// cout<<a.data<<endl;
// a.display();
func1(3.4);

    return 0;
}