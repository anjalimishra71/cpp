#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
class stack
{
    node *head;
    int capacity;
    int currSize;

public:
    stack(int c)
    {
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }
    bool isEmpty()
    {
        return this->head == NULL;
    }
    bool isFull()
    {
        return this->currSize == this->capacity;
    }
    void push(int data)
    {
        if (this->currSize == this->capacity)
        {
            cout << "overflow";
            return;
        }
        node *newnode = new node(data);
        newnode->next = head;
        this->head = newnode;
        this->currSize++;
    }
    int pop()
    {
        if (this->head == NULL)
        {
            cout << "underflow";
            return INT_MIN;
        }
        node *new_node = this->head->next;
        this->head->next = NULL;
        node *tobeRemoved = this->head;
        int result = tobeRemoved->data;
        delete tobeRemoved;
        this->head = new_node;
        return result;
    }
    int size(){
        return this->currSize;
    }
    int getTop(){
        if(this->head==NULL){
            cout<<"underflow\n";
            return INT_MIN;
        }
        return this->head->data;
    }
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
     st.push(3);
     cout<<st.getTop();
     st.pop();
          cout<<st.getTop();

    return 0;
}