/*
    Problem Name : Implement Stack using Linked List.
    Time Complexity of ENQUEUE & DEQUEUE : O(1)
    Space Complexity : O(1)
*/


//***CodeBy_Beyourwild7***//



#include <bits/stdc++.h> 
using namespace std; 
  
struct QNode { 
    int data; 
    QNode* next; 
    QNode(int d) 
    { 
        data = d; 
        next = NULL; 
    } 
}; 
  
struct Queue { 
    QNode *front, *rear; 
    Queue() 
    { 
        front = rear = NULL; 
    } 
  
    void enQueue(int x) 
    {
        QNode* temp = new QNode(x); 
  
        if (rear == NULL) { 
            front = rear = temp; 
            return; 
        } 
  
        rear->next = temp; 
        rear = temp; 
    } 
  
    void deQueue() 
    { 
        if (front == NULL) 
            return; 
  
        QNode* temp = front; 
        front = front->next; 
        
        if (front == NULL) 
            rear = NULL; 
  
        delete (temp); 
    } 
}; 
  
int main() 
{ 
    Queue q; 
    q.enQueue(1); 
    q.enQueue(2); 
    q.deQueue(); 
    q.deQueue(); 
    q.enQueue(3); 
    q.enQueue(4); 
    q.enQueue(5); 
    q.deQueue(); 
    cout << "Queue Front : " << (q.front)->data << endl; 
    cout << "Queue Rear : " << (q.rear)->data; 
} 
