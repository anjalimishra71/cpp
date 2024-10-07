#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *pre;
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
    void insertAtTail(int val)
    {
        node *new_node = new node(val);
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
    void display(node *head)
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    node *reverseLL(node *head)
    {
        node *prevptr = NULL;
        node *curr = head;
        while (curr != NULL)
        {
            node *next_node = curr->next;
            curr->next = prevptr;
            prevptr = curr;
            curr = next_node;
        }
        node *new_node = prevptr;
        return new_node;
    }
    node* reverseLLRecursive(node* &head)
    {
      if(head==NULL|| head->next==NULL){
        return head;
      }
     node* new_head=reverseLLRecursive(head->next);
     head->next->next=head;
     head->next=NULL;
     return new_head;
    }
};

int main()
{
    linkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);

    li.insertAtTail(4);

    // li.reverse(li.head);

     node *head = li.reverseLLRecursive(li.head);
     li.display(head);

    return 0;
}