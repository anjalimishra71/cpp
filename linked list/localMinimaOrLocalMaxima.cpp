#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
  int val;
  node *prev;
  node *next;
  node(int data)
  {
    val = data;
    prev = NULL;
    next = NULL;
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
    newnode->prev = tail;
    tail = newnode;
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
    return;
  }
};
bool isCriticalPoint(node *&currNode)
{
  if (currNode->prev->val < currNode->val && currNode->next->val < currNode->val) // local maxima
    return true;
  if (currNode->prev->val > currNode->val && currNode->next->val > currNode->val) // local minima
    return true;

  return false;
}
vector<int> distanceBetweenCriticalPoints(node *head, node *tail)
{
  vector<int> ans(2, INT_MAX);
  int firstCP = -1, lastCp = -1;

  node *currNode = tail->prev;
  if (currNode == NULL)
  {
    ans[0] = ans[1] = -1;
    return ans;
  }

  int currPos = 0;
  while (currNode->prev != NULL)
  {
    if (isCriticalPoint(currNode))
    {
      if (firstCP == -1)
      {
        firstCP = lastCp = currPos;
      }
      else
      {
        ans[0] = min(ans[0], currPos - lastCp); // minimum distance
        ans[1] = currPos - firstCP;             // maximum distance
        lastCp = currPos;
      }
    }
    currPos++;
    currNode = currNode->prev;
  }
  if (ans[0] == INT_MAX)
  {
    ans[0] = ans[1] = -1;
  }
  return ans;
}

int main()
{
  doubliLinkedList dli;
  dli.insertAtTail(1);
  dli.insertAtTail(5);
  dli.insertAtTail(2);
  dli.insertAtTail(6);
  dli.insertAtTail(3);
  dli.display();
  vector<int> ans = distanceBetweenCriticalPoints(dli.head, dli.tail);
  cout << endl<< ans[0] << ans[1];

  return 0;
}