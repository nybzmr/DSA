// Problem: https://leetcode.com/problems/minimum-path-sum
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[202][202];
    int f(int m, int n, int i, int j,vector<vector<int>>& grid){
        if(i>=m||j>=n) return INT_MAX;
        if(i==m-1&&j==n-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int moveRight = f(m, n, i, j + 1, grid);
        int moveDown = f(m, n, i + 1, j, grid);
        
        return dp[i][j] = grid[i][j] + min(moveRight, moveDown);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        memset(dp, -1, sizeof(dp));
        return f(m,n,0,0,grid);
    }
};