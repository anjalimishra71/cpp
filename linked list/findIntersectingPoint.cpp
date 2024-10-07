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
int length(node *head)
{
    node *ptr = head;
    int l = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        l++;
    }
    return l;
}
node *moveByK(node *head, int k)
{
    node *ptr = head;
    while (k--)
    {
        ptr = ptr->next;
    }
    return ptr;
}
node *intersectPoint(node *head1, node *head2)
{
    node *ptr1;
    node *ptr2;
    int len1 = length(head1);
    int len2 = length(head2);
    int k = 0;
    if (len1 > len2)
    {
        int k = len1 - len2;
        ptr1 = moveByK(head1, k);
        ptr2 = head2;
    }
    else
    {
        int k = len2 - len1;
        ptr2 = moveByK(head2, k);
        ptr1 = head1;
    }
    while (ptr1)
    {
        if (ptr1->val == ptr2->val)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}

int main()
{
    linkedList l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    // l1.display();
    linkedList l2;
    l2.insertAtTail(6);
    l2.insertAtTail(7);
    // l2.head->next->next = l1.head->next->next->next;
    // l2.display();
    node *intersection = intersectPoint(l1.head, l2.head);
    if (intersection)
    {
        cout << intersection->val;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}