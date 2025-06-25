// Problem: https://leetcode.com/problems/01-matrix
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        queue<pair<pair<int,int>, int>> q;
        vector<vector<int>> ans(m, vector<int>(n, -1));
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    q.push({{i, j},0});
                    ans[i][j] = 0;
                    vis[i][j]=1;
                }
            }
        }
        vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

        while (!q.empty()) {
            auto [i, j] = q.front().first;
            auto dist = q.front().second;
            ans[i][j]=dist;
            q.pop();
            for (auto [di, dj] : dirs) {
                int ni = i + di;
                int nj = j + dj;
                if(ni>=0&&nj>=0&&ni<m&&nj<n&&vis[ni][nj]!=1){
                    vis[ni][nj]=1;
                    q.push({{ni,nj},dist+1});   
                }
            }
        }

        return ans;
    }
};