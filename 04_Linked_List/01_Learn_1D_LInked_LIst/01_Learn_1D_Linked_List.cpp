// Problem: https://www.geeksforgeeks.org/problems/introduction-to-linked-list/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
public:
    Node* constructLL(vector<int>& arr) {
        Node* head= new Node(arr[0]);
        Node* current = head;
        for(int i=1;i< arr.size();i++){
            current->next = new Node(arr[i]);
            current = current->next;
        }
        return head;
    }
};