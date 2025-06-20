// Problem: https://leetcode.com/problems/move-zeroes/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        for(int i =j;i<nums.size();i++){
            nums[i]=0;
        }
    }
};