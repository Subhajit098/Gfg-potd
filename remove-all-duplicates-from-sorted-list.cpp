#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

// First method
Node *removeAllDuplicates(struct Node *head)
{
    // code here
    map<int, int> mp;
    Node *temp = head;
    while (temp)
    {
        mp[temp->data]++;
        temp = temp->next;
    }

    Node *new_temp = new Node(-1);
    Node *ans = new_temp;
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            Node *new_node = new Node(it.first);
            new_temp->next = new_node;
            new_temp = new_node;
        }
    }
    ans = ans->next;
    return ans;
}

// second method
Node *removeAllDuplicates(struct Node *head)
{
    // code here
    if (head == NULL)
        return NULL;

    Node *dummy = new Node(-1);
    Node *new_temp = dummy;
    Node *temp = head;

    while (temp)
    {
        bool isDuplicate = false;
        while (temp->next && temp->data == temp->next->data)
        {
            isDuplicate = true;
            temp = temp->next;
        }
        if (!isDuplicate)
        {
            new_temp->next = new Node(temp->data);
            new_temp = new_temp->next;
        }
        temp = temp->next;
    }

    Node *result = dummy->next;
    delete dummy;
    return result;
}

int main()
{

    return 0;
}