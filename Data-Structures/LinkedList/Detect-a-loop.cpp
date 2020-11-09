/*
    Problem Name : Detect Loop in linked list.
    Given : A linked list of N nodes.
    To Do : Check if the the linked list has a loop.
    Time Complexity : O(N)
    Space Complexity : O(1)
*/

/*
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
