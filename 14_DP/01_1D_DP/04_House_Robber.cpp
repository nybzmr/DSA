// Problem: https://leetcode.com/problems/house-robber
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int f(vector<int>& nums,int i, vector<int>& dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int left = nums[i]+f(nums,i+2,dp);
        int right = f(nums,i+1,dp);
        return dp[i]=max(left,right);

    }
    int rob(vector<int>& nums) {
        vector<int>dp(102,-1);
        return max(f(nums,0,dp),f(nums,1,dp));

    }
};