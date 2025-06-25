// Problem: https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

/* Link list node */

struct Node
{
  int data;
  Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

class Solution
{
public:
  // Function to count nodes of a linked list.
  bool searchKey(int n, Node *head, int key)
  {
    // Code here
    Node *current = head;
    bool flag = false;
    while (current->next != NULL)
    {
      if (current->data == key)
      {
        flag = true;
        break;
      }
      current = current->next;
    }
    return flag;
  }
};
