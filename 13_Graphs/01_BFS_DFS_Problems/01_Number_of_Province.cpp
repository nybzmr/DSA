// Problem: https://leetcode.com/problems/number-of-provinces
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int node, vector<int>& vis, vector<vector<int>>& isConnected) {
        vis[node] = 1;
        vector<int> neighbours;
        int n = isConnected.size();
        for (int i=0;i<n;i++) {
            if(isConnected[i][node]==1) neighbours.push_back(i);
        }
        for(auto i : neighbours){
            if(vis[i]==0) dfs(i,vis,isConnected);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n);
        int count=0;
        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                count++;
                dfs(i,vis,isConnected);
            }
        }
        return count;
    }
};