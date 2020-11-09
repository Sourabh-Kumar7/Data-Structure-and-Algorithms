/*

    Problem Name : Nth node from end of linked list. 
    Given : A singly linked list of K nodes.
    To Do : Find the Nth node from the end of the linked list.
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

int getNthFromLast(Node *head, int n)
{
    Node* main_ptr = head;
    Node* ref_ptr = head;
    
    int count =0;
    
    while(count<n)
    {
        if(ref_ptr==NULL)return -1;
        count++;
        ref_ptr=ref_ptr->next;
    }
    
    while(ref_ptr!=NULL)
    {
        ref_ptr=ref_ptr->next;
        main_ptr=main_ptr->next;
    }
    
    return main_ptr->data;
}



