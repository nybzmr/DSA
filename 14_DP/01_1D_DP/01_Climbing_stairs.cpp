// Problem: https://leetcode.com/problems/climbing-stairs
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(int n, vector<int>& memo) {
        if (n == 0 || n == 1)
            return 1;
        if (memo[n] != -1)
            return memo[n];
        memo[n] = helper(n - 1, memo) + helper(n - 2, memo);
        return memo[n];
    }
    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);
        return helper(n, memo);
    }
};