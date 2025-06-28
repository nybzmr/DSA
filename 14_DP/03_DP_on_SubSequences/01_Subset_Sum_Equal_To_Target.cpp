// Problem: https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool f(int i, int currSum, int sum, vector<int>& arr, vector<vector<int>>& dp) {
        if (currSum == sum) {
            return true;
        }
        if (i >= arr.size() || currSum > sum) {
            return false;
        }
        if (dp[i][currSum] != -1) {
            return dp[i][currSum];
        }
        bool pick = f(i + 1, currSum + arr[i], sum, arr, dp);
        bool notPick = f(i + 1, currSum, sum, arr, dp);
        return dp[i][currSum] = (pick || notPick);
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        return f(0, 0, sum, arr, dp);
    }
};