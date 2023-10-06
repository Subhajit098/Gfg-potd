#include<bits/stdc++.h>
using namespace std;

struct Node* reverse(struct Node* head)
    {
        struct Node* temp = head;
        struct Node* prev = NULL;
        struct Node* next = head;
        while(temp!=NULL)
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
        struct Node *temp = odd;
        struct Node *even = odd->next;
        struct Node *evenhead = odd->next;
        while(temp->next != NULL and temp->next->next!=NULL)
        {
            temp->next = temp->next->next;
            temp = temp->next;
            even->next = even->next->next;
            even = even->next;
        }
        struct Node* newevenhead = reverse(evenhead);
        temp->next = newevenhead;
    }