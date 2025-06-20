// Problem: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        bool f1 = true, f2 = true;
        int ind = -1;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                f1 = false;
                ind = i;
                break;
            } else
                continue;
        }
        if (f1 == false) {
            for (int i = 0; i < n - 1; i++) {
                if (nums[(i + ind) % n] <= nums[(i + ind + 1) % n]) {
                    continue;
                } else {
                    f2 = false;
                    break;
                }
            }
        } else {
            return f1;
        }

        return f2;
    }
};