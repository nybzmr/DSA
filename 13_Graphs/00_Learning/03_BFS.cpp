// Problem: https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int>vis(n,0),ans;
        queue<int>q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
           int ptr = q.front();
            q.pop();
            ans.push_back(ptr);
           for(auto neighbour : adj[ptr]){
               if(vis[neighbour]==0){ 
                   q.push(neighbour);
                   vis[neighbour]=1;
               }
            }
        }
        return ans;
    }
};