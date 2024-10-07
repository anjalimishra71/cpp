#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st, int x)
{

    stack<int> temp;
    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }

    st.push(x);
    while (!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}
void insertAtBottomRec(stack<int> &st,int x){
    if(st.empty()){
       st.push(x);
         return;
    }

    int curr=st.top();
    st.pop();
    insertAtBottomRec(st,x);
    st.push(curr);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // insertAtBottom(st, 5);
   insertAtBottomRec(st,5);
    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        cout << curr << endl;
    }
    return 0;
}