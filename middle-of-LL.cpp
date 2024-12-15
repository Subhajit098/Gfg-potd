#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int getMiddle(Node *head)
{
    // code here
    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next, fast = fast->next->next;
    }
    return slow->data;
}

int main()
{

    return 0;
}