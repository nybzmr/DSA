// Problem: https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x)
  {
    data = x;
    next = prev = NULL;
  }
};

// Function to insert a new node at given position in doubly linked list.
class Solution
{
public:
  // Function to insert a new node at given position in doubly linked list.
  Node *addNode(Node *head, int pos, int data)
  {
    // code here
    Node *current = head;
    while (pos--)
    {
      current = current->next;
    }
    Node *temp = new Node(data);

    temp->prev = current;
    temp->next = current->next;
    current->next = temp;
    current = temp->next;
    if (temp->next)
      current->prev = temp;
    return head;
  }
};