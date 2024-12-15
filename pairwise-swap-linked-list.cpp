#include<bits/stdc++.h>
using namespace std;

Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head==NULL || head->next==NULL) return head;
        struct Node* first=head;
        struct Node* second=head->next;
        struct Node* prev=NULL;
        while(first!=NULL and first->next!=NULL){
            Node* nextNode=first->next->next;
            Node* temp=first->next;
            if(prev!=NULL){
                prev->next=temp;
            }
            temp->next=first;
            first->next=nextNode;
            
            prev=first;
            first=nextNode;
        }
        return second;
    }


    // recursion approach 
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(!head || !head->next) return head;
        
        
        Node* temp=head->next;
        head->next=pairWiseSwap(head->next->next);
        temp->next=head;
        return temp;
    }
