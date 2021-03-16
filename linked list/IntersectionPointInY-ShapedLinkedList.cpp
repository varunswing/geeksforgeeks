// { Driver Code Starts
#include<iostream>
#include<stdio.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1 == NULL || head2 == NULL){
        return -1;
    }
    int n=0, m=0;
    Node* temp=head1;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp){
        temp=temp->next;
        n++;
    }
    temp = head2;
    while(temp){
        temp=temp->next;
        m++;
    }
    if(m > n){
        int t=m-n;
        for(int i=0; i<t; i++){
            temp2 = temp2->next;
        }
        for(int i=0; i<n; i++){
            if(temp2->next == temp1->next){
                return temp2->next->data;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }else{
        int t=n-m;
        for(int i=0; i<t; i++){
            temp1 = temp1->next;
        }
        for(int i=0; i<m; i++){
            if(temp2->next == temp1->next){
                return temp2->next->data;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return -1;
}

