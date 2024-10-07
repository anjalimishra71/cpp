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
node* rotateByK(node* &head,int k){
    int n=0;
    node* tail=head;
    while(tail->next){
        n++;
        tail=tail->next;
    }
    n++;
    k=n%k;
    if(k==0){
        return head;
    }
    tail->next=head;
    node* temp=head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }
    node* newhead=temp->next;
    temp->next=NULL;
    return newhead;

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
   li.head=rotateByK(li.head,4);
   li.display();
    return 0;
}