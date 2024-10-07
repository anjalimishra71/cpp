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
node *reorderLisnkedList(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    node *curr = slow->next;
    node *pre = slow;
    slow->next = NULL;
    while (curr)
    {
        node *newnode = curr->next;
        curr->next = pre;
        pre = curr;
        curr = newnode;
    }

    node *head1 = head;
    node *head2 = pre;
    while (head1 != head2)
    {
        node *ptr = head1->next;
        head1->next = head2;
        head1 = head2;
        head2 = ptr;
    }
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
    li.head = reorderLisnkedList(li.head);
    li.display();
    return 0;
}