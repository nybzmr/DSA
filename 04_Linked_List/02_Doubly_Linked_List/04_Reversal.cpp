// Problem: https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode* current=head;
        DLLNode* temp= nullptr;
        while(current!=nullptr){
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current=current->prev;
        }
        if (temp != nullptr) {
            head = temp->prev;
        }
        return head;
    }
};