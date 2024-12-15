#include<bits/stdc++.h>
using namespace std;

Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node* temp=head;
        Node* node=new Node(data);
        
        if(head==NULL) return node;
        
        if(temp->data>=node->data){
            node->next=temp;
            return node;
        }
        
        Node* dummy=NULL;
        
        while(temp->data<=node->data){
            dummy=temp;
            if(temp->next==NULL) {
                temp->next=node;
                return head;
            }
            temp=temp->next;
        }
        
        
        
        node->next=dummy->next;
        dummy->next=node;
        return head;
        
    }