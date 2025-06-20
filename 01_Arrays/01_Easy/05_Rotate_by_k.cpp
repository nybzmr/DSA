// Problem: https://leetcode.com/problems/rotate-array/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>nums_cpy;
        for(int i=0;i<n;i++){
            nums_cpy.push_back(nums[i]);
        }
        for (int i = 0; i < n ; i++) {
                nums[(i + k) % n] = nums_cpy[i];
            }
    }
};


//most optimum
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        auto start = nums.begin();
        auto end= nums.end();
        reverse(start,start+n-k);
        reverse(start+n-k,end);
        reverse(start,end);
    }
};