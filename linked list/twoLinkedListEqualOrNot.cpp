#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int n)
    {
        val = n;
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
bool checkEquality(node *head1, node *head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return (temp1 == NULL && temp2 == NULL) ;
}
int main()
{
    linkedList l1;
    linkedList l2;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.display();
    cout << endl;
    l2.insertAtTail(1);
    l2.insertAtTail(2);
    l2.insertAtTail(3);

    l2.display();
    cout << endl;
    
    cout <<checkEquality(l1.head, l2.head) ;
    return 0;
}