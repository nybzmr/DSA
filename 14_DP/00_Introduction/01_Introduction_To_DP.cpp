// Problem: https://www.geeksforgeeks.org/problems/introduction-to-dp/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution {
  public:
  
    long long int MOD=1e9+7;
    long long int fib(int n, vector<long long int>& dp) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (dp[n] != -1) return dp[n]; 
        dp[n] = (fib(n - 1, dp) + fib(n - 2, dp)) % MOD;
        return dp[n];
    }
    
    long long int topDown(int n) {
        vector<long long int> dp(n + 1, -1);  
        dp[0] = 0;
        dp[1] = 1;
        return fib(n, dp);
    }


    long long int bottomUp(int n) {
        if (n == 0) return 0;
        vector<long long int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
        }
        return dp[n];
    }
    
};