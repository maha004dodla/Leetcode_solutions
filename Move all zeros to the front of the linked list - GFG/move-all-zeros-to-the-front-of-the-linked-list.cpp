//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
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

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void moveZeroes(struct Node **head);

// function to displaying nodes
void display(struct Node *head) {
    while (head != NULL) {
	    cout << head->data << " ";
	    head = head->next;
    }
    cout <<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q;
        vector<int> v;
        struct Node *Head=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>q;
            v.push_back(q);
        }
        reverse(v.begin(),v.end());
        for(auto q:v)
            push(&Head,q);
        moveZeroes(&Head);
        display(Head);

    }
}

// } Driver Code Ends


//User function Template for C++
/* Linked List Node structure
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
// Move Zeros to the front of the list
void moveZeroes(struct Node **head)
{
    Node* temp=*head;
    int i;
    vector<int>z;
    vector<int>nz;
    while(temp)
    {
        if(temp->data==0)
        {
            z.push_back(temp->data);
        }
        else
        {
            nz.push_back(temp->data);
        }
        temp=temp->next;
    }
    temp=*head;
    for(i=0; i<z.size(); i++)
    {
        temp->data=z[i];
        temp=temp->next;
    }
    for(i=0; i<nz.size(); i++)
    {
        temp->data=nz[i];
        temp=temp->next;
    }
}