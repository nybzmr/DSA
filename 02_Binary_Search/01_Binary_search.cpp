// Problem: https://leetcode.com/problems/binary-search
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bs(vector<int>&nums,int l,int u, int target){
        int i=(l+u)/2;
        if(nums[i]==target){
            return i;
        }
        if(l>=u) return -1;
        if(target<nums[i]) return bs(nums,l,i-1,target);
        else return bs(nums,i+1,u,target);
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return bs(nums,0,n-1,target);
    }
};