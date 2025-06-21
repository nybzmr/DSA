// Problem: https://leetcode.com/problems/majority-element
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        //     if (mp[nums[i]] > n / 2)
        //         return nums[i];
        // }
        // return -1;
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};