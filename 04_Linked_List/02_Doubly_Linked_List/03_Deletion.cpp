// Problem: https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* current =head;
        if(x==1){
            current=current->next;
            if(current) current->prev=NULL;
            return current;
        }
        x--;
        while(x--){
            current=current->next;
        }
        Node* temp=current->prev;
        temp->next=current->next;
        current=current->next;
        if(current) current->prev=temp;
        return head;
    }
};