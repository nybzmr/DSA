// Problem: https://leetcode.com/problems/4sum
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i - 1] == nums[i])
                continue;
            for (int j = i + 1; j < n - 2; j++) {
                if ((j > i + 1) && nums[j - 1] == nums[j])
                    continue;
                int left = j + 1;
                int right = n - 1;
                while (left < right) {
                    long long sum =
                        (long long)nums[left] + nums[right] + nums[i] + nums[j];
                    if (sum == target) {
                        ans.push_back(
                            {nums[left], nums[right], nums[i], nums[j]});
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        while (left < right && nums[right] == nums[right - 1])
                            right--;
                        left++;
                        right--;
                    } else if (sum < target)
                        left++;
                    else
                        right--;
                }
            }
        }

        return ans;
    }
};
