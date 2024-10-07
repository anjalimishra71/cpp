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
    pre = NULL;
  }
};
class doubliLinkedList
{
public:
  node *head;
  node *tail;
  doubliLinkedList()
  {
    head = NULL;
    tail = NULL;
  }
  void insertAtStart(int data)
  {
    node *newnode = new node(data);
    if (head == NULL)
    {
      head = newnode;
      tail = newnode;
      return;
    }
    newnode->next = head;
    head->pre = newnode;
    head = newnode;
    return;
  }
  void insertAtTail(int data)
  {
    node *newnode = new node(data);
    if (head == NULL)
    {
      head = newnode;
      tail = newnode;
      return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode;
    return;
  }
  void insertAtKthPos(int data, int k)
  {
    node *newnode = new node(data);
    int i = 1;
    node *temp = head;
    while (i < k - 1)
    {
      temp = temp->next;
      i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->pre = temp;
    newnode->next->pre = newnode;
    return;
  }

  void deleteAtFirst()
  {
    if (head == NULL)
    {
      return;
    }
    node *temp = head;
    head = head->next;
    if (head == NULL)
    {
      tail = NULL;
    }
    else
    {
      head->pre = NULL;
    }
    free(temp);

    return;
  }

  void deleteAtKthPos(int k)
  {
    node *temp = head;
       int i = 1;
    while (i < k )
    {
      temp = temp->next;
      i++;
    }
    temp->pre->next = temp->next;
    temp->next->pre = temp->pre;
    free(temp);
    return;
  }

  void deleteAtEnd()
  {
    if(head==NULL){
      return;
    }
    node* temp=tail;
    tail=tail->pre;
    if(tail==NULL){
      head=NULL;
    }else{
      tail->next=NULL;
    }
    return;
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

int main()
{
  doubliLinkedList dli;
  // dli.insertAtStart(1);
  // dli.insertAtStart(2);
  // dli.insertAtStart(3);
  // dli.insertAtStart(4);
  dli.insertAtTail(1);
  dli.insertAtTail(2);
  dli.insertAtTail(3);
  dli.insertAtTail(4);
  dli.insertAtKthPos(5, 3);

  // dli.deleteAtFirst();
 //dli.deleteAtKthPos(3);
  dli.deleteAtEnd();
  dli.display();

  return 0;
}