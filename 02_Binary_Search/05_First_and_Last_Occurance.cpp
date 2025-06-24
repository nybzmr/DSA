// Problem: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        if (nums.empty()) return result;
        
        // Find first occurrence (left bound)
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        // Check if target exists
        if (left >= nums.size() || nums[left] != target) {
            return result;
        }
        result[0] = left;
        
        // Find last occurrence (right bound)
        right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        result[1] = right;
        
        return result;
    }
};