// Problem: https://leetcode.com/problems//longest-consecutive-sequence
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.empty()) return 0;
        int longest = 1, current = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue; 
            } else if (nums[i] == nums[i - 1] + 1) {
                current++;
            } else {
                longest = max(longest, current);
                current = 1;
            }
        }

        return max(longest, current);
    }
};