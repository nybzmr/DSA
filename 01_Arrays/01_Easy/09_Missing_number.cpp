// Problem: https://leetcode.com/problems/missing-number/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        // map<int,bool>mp;
        // for(auto i:nums){
        //     mp[i]=true;
        // }
        // int n =nums.size();
        // int ans;
        // for(int i =0;i<=n;i++){
        //     if(!mp[i]){
        //         ans=i;
        //         break;
        //     }
        // }
        // return ans;


        
        // sort(nums.begin(), nums.end());
        // int cnt = 0;
        // for (auto i : nums) {
        //     if (i != cnt) return cnt;
        //     cnt++;
        // }
        // return cnt;



        // int n=nums.size();
        // int tsum=n*(n+1)/2;
        // int sum=0;
        // for (auto i : nums) {
        //     sum+=i;
        // }
        //return tsum-sum;



        int x1 = 0, x2 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            x1 ^= nums[i];
            x2 ^= i;
        }
        x2 ^= n;
        return x1 ^ x2;
    }
};