// Problem: https://leetcode.com/problems/middle-of-the-linked-list
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t= head;
        ListNode* h=head;
        while(h!=nullptr&&h->next!=nullptr){
            t=t->next;
            h=h->next->next;
        }
        return t;
    }
};
