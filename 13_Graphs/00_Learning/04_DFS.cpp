// Problem: https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int>ans;
    void dfs(int node, vector<int>& vis,vector<vector<int>>& adj){
        vis[node]=1;
        ans.push_back(node);
        for(auto neighbour : adj[node]){
            if(vis[neighbour]==0) dfs(neighbour,vis,adj);
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int>vis(n,0);
        dfs(0,vis,adj);
        return ans;
    }
};