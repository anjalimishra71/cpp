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
node* oddEvenLinkedList(node* &head){
     node* oddPtr=head;
     node* evenhead=head->next;
     node* evenPtr=evenhead;
     while(evenPtr && evenPtr->next){
        oddPtr->next=oddPtr->next->next;
        evenPtr->next=evenPtr->next->next;
        oddPtr=oddPtr->next;
        evenPtr=evenPtr->next;
     }
     oddPtr->next=evenhead;
   return head;   
}
int main()
{
    linkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);
    li.insertAtTail(4);
    li.insertAtTail(5);
    li.insertAtTail(6);
   // li.display();
   li.head=oddEvenLinkedList(li.head);
   li.display();
    return 0;
}