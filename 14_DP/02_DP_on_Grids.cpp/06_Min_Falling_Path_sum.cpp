// Problem: https://leetcode.com/problems/minimum-fallling-path-sum
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int f(int n, int i,int j,vector<vector<int>>& matrix, vector<vector<int>> &dp){
        if(i>=n||j>=n||i<0||j<0) return INT_MAX;
        if(i==n-1) return matrix[i][j];
        if(dp[i][j]!=-101) return dp[i][j];
        int left = f( n, i + 1, j-1, matrix,dp);
        int below = f( n, i + 1, j, matrix,dp);
        int right = f( n, i + 1, j + 1, matrix,dp);

        return dp[i][j] = matrix[i][j] + min(min(left, right),below);
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int ans=INT_MAX;
        vector<vector<int>>dp(n, vector<int>(n,-101));
        for(int i=0;i<n;i++){
            ans = min(f( n, 0, i, matrix,dp), ans);
        }
        return ans;
    }
};

// class Solution {
// public:
//     int dp[102][102];
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         memset(dp, -1, sizeof(dp));

        

//         return *min_element(dp[101].begin(), matrix[101].end());
//     }
// };


// class Solution {
// private: 
//     int mps(int r, int c, vector<vector<int>>&m,int&n, vector<vector<int>>&dp){
//         if(dp[r][c] != -101) return dp[r][c];
//         int val = m[r][c];
//         if(r==n-1) return val;
//         int min3 = mps(r+1,c,m,n,dp);
//         if(c-1>=0) min3 = min(min3, mps(r+1,c-1,m,n,dp));
//         if(c+1<n) min3 = min(min3, mps(r+1,c+1,m,n,dp));
//         return dp[r][c] = val+min3;
//     }
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int ans = INT_MAX;
//         vector<vector<int>> dp(n, vector<int>(n, -101));
//         for(int i=0; i<n; i++){
//             ans = min(ans, mps(0,i,matrix,n,dp));
//         }
//         return ans;
//     }
// };