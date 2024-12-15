#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};

Node sortedInsert(Node head, int data)
    {
       //Your code here
       if(!head){
           Node* newHead=new Node(data);
           return newHead;
       }
       Node* prev=head;
       Node* temp=head->next;
       bool flag=false;
       while(temp!=head){
           if(data>=prev->data && temp->data>=data){
               Node* newNode=new Node(data);
               prev->next=newNode;
               newNode->next=temp;
               flag=true;
               break;
           }
           temp=temp->next;
           prev=temp;
       }
       if(!flag){
           Node* newNode=new Node(data);
           prev->next=newNode;
           newNode->next=temp;
       }
       return  head;
    }