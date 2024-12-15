#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node* head=head_ref;
        Node* ans=new Node(head->data);
        Node* curr=head->next;
        
        while(curr!=NULL){
            Node* next_node=curr->next;
            
            Node* temp=ans;
            Node* prev=NULL;
            
            while(temp!=NULL && temp->data < curr->data){
                prev=temp;
                temp=temp->next;
            }
            
            if(prev==NULL){
                curr->next=temp;
                ans=curr;
            }
            
            else if(temp==NULL){
                prev->next=curr;
                curr->next=NULL;
            }
            
            else {
                prev->next=curr;
                curr->next=temp;
            }
            
            curr=next_node;
        }
        
        return ans;
    }