// Problem: https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head==NULL){
            head = new Node(x);
        }
        else{
            Node* current = head;
            while(current->next!=NULL){
                current=current->next;
            }
            current->next=new Node(x);
        }
        return head;
    }
};