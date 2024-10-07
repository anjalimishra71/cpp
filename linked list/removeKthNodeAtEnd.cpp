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
void removeKthNodeAtLast(node* &head, int k)
{
    node *ptr1 = head;
    node *ptr2 = head;
    while (k--)
    {
        ptr2 = ptr2->next;
    }
    if(ptr2==NULL){
        node* t=head;
        head=head->next;
        free(t);
        return;
    }
    while (ptr2->next!= NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    node *temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
}
int main()
{
    linkedlist li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);
    li.insertAtTail(4);
    li.insertAtTail(5);
    li.insertAtTail(6);
    removeKthNodeAtLast(li.head, 3);
    li.display();
    return 0;
}