/*

    Problem Name : Check if Linked List is Palindrome 
    Given : A singly linked list of N nodes.
    To Do : Check if the given linked list is palindrome or not.
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

bool isPalindrome(Node *head)
{
    Node *slow = head;
    Node *temp = head;
    stack<int> s;
    int n =0;
    while(temp!=NULL)
    {
        n++;
        temp=temp->next;
    }
    //cout<<n<<endl;
    
    if(n==1)return true;
    int p = n;
    n/=2;
    while(n>0)
    {
        s.push(slow->data);
        slow=slow->next;
        n--;
    }
    if(p%2!=0)
    {
        slow=slow->next;
    }
    
    while(slow)
    {
        if(s.top()!=slow->data)return false;
        slow=slow->next;
        s.pop();
    }
    return true;
}
