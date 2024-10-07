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
class linkedList
{
public:
    node *head;
    node *tail;
    linkedList()
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

    vector<int> pairsSumDll(int target)
    {
        vector<int> ans(2, -1);
        while (head != tail)
        {
            int sum = head->val + tail->val;
            if (sum == target)
            {
                ans[0]=head->val;
                ans[1]=tail->val;
                return ans;
            }
            if (sum> target)
            {
                tail = tail->prev;
            }
            else
            {
                head = head->next;
            }
        }
        return ans;
    }
    void display()
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->val;
            ptr = ptr->next;
        }
    }
};

int main()
{
    linkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);
    li.insertAtTail(4);
    //  li.display();
 vector<int> ans=li.pairsSumDll(4);
 cout<<ans[0]<<" "<<ans[1];
    return 0;
}