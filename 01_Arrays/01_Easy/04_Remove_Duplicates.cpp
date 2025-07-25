// Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[cnt]=nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};