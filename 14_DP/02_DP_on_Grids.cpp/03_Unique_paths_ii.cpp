// Problem: https://leetcode.com/problems/unique-paths-ii
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[102][102];
    int f(int m, int n, int i, int j,vector<vector<int>>& obstacleGrid){
        if(i<m&&j<n&&obstacleGrid[i][j]==1)
            return 0;
        if(i>=m||j>=n) return 0;
        if(i==m-1&&j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int moveRight = f(m,n,i,j+1,obstacleGrid);
        int moveDown = f(m,n,i+1,j,obstacleGrid);
        return dp[i][j]= moveRight+moveDown;    


    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp, -1, sizeof(dp));
        int m =obstacleGrid.size();
        int n=obstacleGrid[0].size();
        return f(m,n,0,0,obstacleGrid);
    }
};
