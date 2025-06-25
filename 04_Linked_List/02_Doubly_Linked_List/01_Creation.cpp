// Problem: https://www.geeksforgeeks.org/problems/introduction-to-doubly-linked-list/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++


class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* current=head;
        for(int i=1;i<arr.size();i++){
            Node* temp= new Node(arr[i]);
            temp->prev=current;
            current->next=temp;
            current = current->next;
        }
        return head;
    }
};