// Problem: https://leetcode.com/problems/is-graph-bipartite
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n =graph.size();
        vector<int>colour(n,-1);
        for (int i = 0; i < n; i++) {
            if (colour[i] == -1) {  // Found a new component
                queue<pair<int, int>> q;
                q.push({i, 0});
                colour[i] = 0;
                
                while (!q.empty()) {
                    auto [node, color] = q.front();
                    q.pop();
                    
                    for (int neighbor : graph[node]) {
                        if (colour[neighbor] == color) {
                            return false;  
                        }
                        if (colour[neighbor] == -1) {
                            colour[neighbor] = 1 - color;
                            q.push({neighbor, 1 - color});
                        }
                    }
                }
            }
        }
        return true;
    }
};