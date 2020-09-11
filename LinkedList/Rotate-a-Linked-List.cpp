/*

    Problem Name : Rotate a Linked List.
    Given : A singly linked list of N nodes and a interger K.
    To Do : Rotate the linked list counter-clockwise by K nodes.
    Time Complexity : O(N)
    Space Complexity : O(1)

*/

//***CodeBy_Beyourwild7***//


/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

Node* rotate(Node* head, int k)
{
    Node* temp = head;
    Node* temp1 = head;
    int n =1;
    while(temp->next!=NULL)
    {
        n++;
        temp=temp->next;
    }
    
    k=k%n;
    if(k==0)return head;
    n=0;
    while(temp1!=NULL)
    {
        n++;
        if(n==k)break;
        temp1=temp1->next;
    }
    Node * temp2 = temp1->next;
    temp->next=head;
    temp1->next=NULL;
    
    head = temp2;
    return head;  
}
