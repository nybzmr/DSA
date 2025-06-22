// Problem: https://leetcode.com/problems/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for (auto& it : mp) {
            if (it.second > n / 3)
                v.push_back(it.first);
        }
        return v;
    }
};

// Moore's Algorithm for O(1) Space Complexity


// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int count1 = 0, count2 = 0, candidate1 = INT_MIN, candidate2 = INT_MIN;

//         for (int num : nums) {
//             if (num == candidate1) count1++;
//             else if (num == candidate2) count2++;
//             else if (count1 == 0) candidate1 = num, count1 = 1;
//             else if (count2 == 0) candidate2 = num, count2 = 1;
//             else count1--, count2--;
//         }

//         // Verify candidates
//         count1 = count2 = 0;
//         for (int num : nums) {
//             if (num == candidate1) count1++;
//             else if (num == candidate2) count2++;
//         }

//         vector<int> result;
//         if (count1 > nums.size() / 3) result.push_back(candidate1);
//         if (count2 > nums.size() / 3) result.push_back(candidate2);
//         return result;
//     }
// };
