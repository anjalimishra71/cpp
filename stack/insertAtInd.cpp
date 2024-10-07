#include<iostream>
#include<stack>
using namespace std;
void insertAt(stack<int> &st,int x,int idx){
   stack<int> temp;
   int n=st.size();
   int count=0;
   while(count<n-idx){
    count++;
    int curr=st.top();
    st.pop();
    temp.push(curr);

   }
   st.push(x);
   while(!temp.empty()){
    int curr=temp.top();
    temp.pop();
    st.push(curr);
   }

}
void insertAtIndRec(stack<int> &st,int x,int idx){
   int count=0;
int n=st.size();
   if(count==n-idx){
   st.push(x);
   return;
   }
   int curr=st.top();
   st.pop();
   count++;
   insertAtIndRec(st,x,idx);
   st.push(curr);

}

int main(){
   stack<int> st;
   st.push(1);
   st.push(2);
   st.push(3);
//    insertAt(st,100,1);
insertAtIndRec(st,100,1);
   while(!st.empty()){
    int curr=st.top();
    st.pop();
    cout<<curr<<endl;
   }

    return 0;
}