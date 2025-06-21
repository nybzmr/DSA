// Problem: https://leetcode.com/problems/maximum-subarray
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = nums[0];
        int currSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSoFar = max(maxSoFar, currSum);
        }

        return maxSoFar;
    }
};
