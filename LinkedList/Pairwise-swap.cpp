/*

    Problem Name : Pairwise swap elements of a linked list.
    Given : A singly linked list of N nodes.
    To Do : Swap elements in the linked list pairwise.
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


Node* pairWiseSwap(struct Node* head) {
    Node * temp = head;
    
    while(temp && temp->next)
    {
        swap(temp->data,temp->next->data);
        
        temp=temp->next->next;
    }
    
    return head;
}
