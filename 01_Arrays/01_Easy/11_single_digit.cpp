// Problem: https://leetcode.com/problems/single-number
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto it:nums){
            ans^=it;
        }
        return ans;
    }
};