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
node* swapAdjacent(node* &head){
    if(head==NULL || head->next==NULL){
       return head;
    }
    node* secondnode=head->next;
    head->next=swapAdjacent(secondnode->next);
    secondnode->next=head;
    return secondnode;
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
    li.head = swapAdjacent(li.head);
    li.display();
    return 0;
}