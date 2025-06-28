// Problem: https://leetcode.com/problems/triangle
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[202][202];
    int f(int n, int i,int j,vector<vector<int>>& triangle){
        if(i>=n||j>i) return INT_MAX;
        if(i==n-1) return triangle[n-1][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int left = f( n, i + 1, j, triangle);
        int right = f( n, i + 1, j + 1, triangle);
        
        return dp[i][j] = triangle[i][j] + min(left, right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        memset(dp, -1, sizeof(dp));
        return f(n,0,0,triangle);
    }
};