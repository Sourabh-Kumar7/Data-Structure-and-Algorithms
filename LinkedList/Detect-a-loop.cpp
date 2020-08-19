/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.
Main method is not mention that you have to wirte yourself.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node* fast=head;
    Node* slow = head;
    
    while(slow && fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)return true;
    }
    
    return false;
}
