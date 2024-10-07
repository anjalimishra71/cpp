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
   
  void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val;
        temp=temp->next;
    }
    return;
  }
};
void deleteNeighbornNode(node* head,node* tail){
   node* curr=tail->prev;
   while(curr!=head){
    node* prevNode=curr->prev;
    node* nextNode=curr->next;
    if(prevNode->val==nextNode->val){
       nextNode->prev=prevNode;
       prevNode->next=nextNode;
    free(curr);
    }
    
    curr=prevNode;

   }
 return;
}
    int main(){
   doubliLinkedList dli;
   dli.insertAtTail(2);
   dli.insertAtTail(1);
   dli.insertAtTail(1);
   dli.insertAtTail(2);
   dli.insertAtTail(1);
   deleteNeighbornNode(dli.head,dli.tail);
   dli.display();
 
    return 0;
}