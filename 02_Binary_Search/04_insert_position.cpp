// Problem: https://leetcode.com/problems/search-insert-position
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l =0, u = n-1;
        if(target<nums[0]) return 0;
        if(target>nums[u]) return n;
        int ans;
        while(l<=u){
            int m=(l+u)/2;
            if(nums[m]==target) {
                ans =m;
                l = m + 1;
            }
            if(nums[m]<target){
                ans = m+1;
                l=m+1;
            }
            else{
                u=m-1;
            }
        }
        return ans;
    }
};