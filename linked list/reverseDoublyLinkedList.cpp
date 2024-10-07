#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* prev;
    node* next;
    node(int data){
  val=data;
  prev=NULL;
  next=NULL;
    }
};
class doubliLinkedList{
   public:
   node* head;
   node* tail;
   doubliLinkedList(){
    head=NULL;
    tail=NULL;
   }

   void insertAtTail(int data){
     node* newnode=new node(data);
     if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
     }
     tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
     return;
   }
   void reverse(){
    node* current=head;
       while(current!=NULL){
    node* nextPtr=current->next;
   
      current->next=current->prev;
      current->prev=nextPtr;
      current=nextPtr;
      
    }
    node* newHead=tail;
    tail=head;
    head=newHead;
    return;
   }
  void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val;
        temp=temp->next;
    }
    return;
  }
};

int main(){
   doubliLinkedList dli;
   dli.insertAtTail(1);
   dli.insertAtTail(2);
   dli.insertAtTail(3);
   dli.insertAtTail(4);
   dli.reverse();
   dli.display();
 
    return 0;
}