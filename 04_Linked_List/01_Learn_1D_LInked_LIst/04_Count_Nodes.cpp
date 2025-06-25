// Problem: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
/* Link list node */

struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; 

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        if(head==NULL) return 0;
        Node* current = head;
        int cnt=1;
        while(current->next!=NULL) {
            current = current->next;
            cnt++;
        }
        return cnt;
    }
};