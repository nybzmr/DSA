// Problem: https://leetcode.com/problems/sort-colours
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<mp[0];i++){
            nums[i]=0;
        }
        for(int i=0;i<mp[1];i++){
            nums[mp[0]+i]=1;
        }
        for(int i=0;i<mp[2];i++){
            nums[mp[0]+mp[1]+i]=2;
        }
    }
};