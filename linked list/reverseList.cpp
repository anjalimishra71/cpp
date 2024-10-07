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
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    void reverse(node *head)
    {
        node *temp = head;
        if (temp == NULL)
        {
            return;
        }
        reverse(temp->next);
        cout << temp->val;
    }
    
};

int main()
{
    linkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);

    li.insertAtTail(4);

    li.display();
    li.reverse(li.head);
    return 0;
}