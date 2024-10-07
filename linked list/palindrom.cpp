#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};
class linkedList
{
public:
    node *head;
    linkedList()
    {
        head = NULL;
    }
    void insertAtTail(int data)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val;
            temp = temp->next;
        }
    }
};
bool isPalindrom(node* head){
   //find middle element
   node* slow=head;
   node* fast=head;

   while(fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
   }
   //now slow is pointing to middle element
   //2. break the linkedlist in middle
   node* curr=slow->next;
   node* prev=slow;
   slow->next=NULL;
   
   //3.reverse the second half of list
   while(curr){
    node* nextNode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextNode;
   }

   //4.check if the two linkedlist are equal
  node* head1=head;
  node* head2=prev;
   while(head2){
    if(head1->val!=head2->val){
        return false;
    }
   head1=head1->next;
   head2=head2->next;
   }
return true;
}
int main()
{
    linkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
  //  li.insertAtTail(3);
    li.insertAtTail(3);
    li.insertAtTail(2);
    li.insertAtTail(1);
   // li.display();
  cout<< isPalindrom(li.head);
    return 0;
}