// Problem: https://www.geeksforgeeks.org/problems/geeks-training/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int f(vector<vector<int>>& arr,int i,int prevact,vector<vector<int>>& dp){
        if(i>=arr.size()) return 0;
        int left,right;
        if(prevact==0){
            if(dp[i][0]!=-1) return dp[i][0];
            left = arr[i][1]+f(arr,i+1,1, dp);
            right = arr[i][2]+f(arr,i+1,2,dp);
            return dp[i][0]=max(left,right);
        }
        if(prevact==1){
            if(dp[i][1]!=-1) return dp[i][1];
            left = arr[i][2]+f(arr,i+1,2,dp);
            right = arr[i][0]+f(arr,i+1,0,dp);
            return dp[i][1]=max(left,right);
        }
        if(prevact==2){
            if(dp[i][2]!=-1) return dp[i][2];
            left = arr[i][0]+f(arr,i+1,0,dp);
            right = arr[i][1]+f(arr,i+1,1,dp);
            return dp[i][2]=max(left,right);
        }
        
    }
    int maximumPoints(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>>dp(n, vector<int>(3,-1));
        int m = max(f(arr,0,0,dp),f(arr,0,1,dp));
        return max(m,f(arr,0,2,dp));
        // Code here
        
        
    }
};