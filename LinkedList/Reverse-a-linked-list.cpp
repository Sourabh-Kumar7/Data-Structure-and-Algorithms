/*

    Problem Name : Reverse a linked list.
    Given : A singly linked list of N nodes.
    To Do : Reverse this list.
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

void reverse() 
    { 
        Node* current = head; 
        Node *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            next = current->next; 

            current->next = prev; 
  
            prev = current; 
            current = next; 
        } 
        head = prev; 
    } 
