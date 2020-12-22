// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
/* Function to get the middle of the linked list*/
int getMiddle(Node *head);
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		cout<<getMiddle(head)<<endl;
	}
	return 0; 
} 

// } Driver Code Ends


/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
   int count = 1, ans;
   temp = head;
   if(head->next != NULL){
       while(temp->next){
           temp = temp->next;
           count ++;
       }
       if(count%2 == 0){
           for(int i=0; i<(count/2); i++){
               head = head->next;
           }
       }else{
           for(int i=0; i<((count -1)/2); i++){
               head = head->next;
           }
       }
       ans = head->data;
   }else if(head == NULL){
       ans = -1;
   }else{
       ans = head->data;
   }
   
}
