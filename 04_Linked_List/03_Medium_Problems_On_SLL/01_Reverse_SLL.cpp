// Problem: https://leetcode.com/problems/reverse-linked-list/
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
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;

        while (current != nullptr) {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        return prev;
    }
};