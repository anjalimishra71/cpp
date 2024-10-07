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
bool detectCycle(node *head)
{
    if (!head)
    {
        return false;
    }
    node *ptr1 = head;
    node *ptr2 = head;
    while (ptr2 && ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if (ptr1 == ptr2)
        {
            return true;
        }
    }
    return false;
}
void removeCycle(node* head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main()
{
    linkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);
    li.insertAtTail(4);
    li.insertAtTail(5);
    li.head->next->next->next->next = li.head->next->next;
    // li.display();
    //cout << detectCycle(li.head)<<endl;
    removeCycle(li.head);
    cout<<"after removing cycle"<<endl;
    //cout << detectCycle(li.head)<<endl;
li.display();
    return 0;
}