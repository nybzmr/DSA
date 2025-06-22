// Problem: https://leetcode.com/problems/rearrange-array-elements-by-sign/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>plus;
        vector<int>minus;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) plus.push_back(nums[i]);
            else minus.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i+=2){
            nums[i]=plus[i/2];
            nums[i+1]=minus[i/2];
        }
        return nums;
    }
};