/*

    Problem Name : Finding middle element in a linked list.
    Given : A singly linked list of N nodes.
    To Do : Find the middle of the linked list.
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

int getMiddle(Node *head)
{
  Node* slow = head;
  Node* fast = head;
  
  while(slow && fast && fast->next)
  {
      slow=slow->next;
      fast=fast->next->next;
  }
  return slow->data;
}
