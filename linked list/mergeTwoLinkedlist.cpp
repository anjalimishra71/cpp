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
class linkedlist
{
public:
    node *head;
    linkedlist()
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
node* mergrTwoList(node* head1,node* head2){
    node* dummyHeadNode=new node(-1);
node* ptr1=head1;
node* ptr2=head2;
node* ptr3=dummyHeadNode;
while(ptr1 && ptr2){
if(ptr1->val<ptr2->val){
    ptr3->next=ptr1;
    ptr1=ptr1->next;
}else{
ptr3->next=ptr2;
ptr2=ptr2->next;
}
ptr3=ptr3->next;
}
if(ptr1){
    ptr3->next=ptr1;
  ptr1=ptr1->next;
}
if(ptr2){
    ptr3->next=ptr2;
   ptr2=ptr2->next;
}
return dummyHeadNode->next;
}
int main()
{
    linkedlist li;
    li.insertAtTail(1);
    li.insertAtTail(4);
    li.insertAtTail(5);
   linkedlist l2;
   l2.insertAtTail(2);
   l2.insertAtTail(3);
      linkedlist l3;

 l3.head=mergrTwoList(li.head,l2.head);
    l3.display();
    return 0;
}