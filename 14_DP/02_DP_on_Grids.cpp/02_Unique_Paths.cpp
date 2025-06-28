// Problem: https://leetcode.com/problems/unique-paths
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[102][102];
    int f(int m, int n, int i, int j){
        if(i>=m||j>=n) return 0;
        if(i==m-1&&j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int moveRight = f(m,n,i,j+1);
        int moveDown = f(m,n,i+1,j);
        return dp[i][j]= moveRight+moveDown;


    }
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        return f(m,n,0,0);
    }
};