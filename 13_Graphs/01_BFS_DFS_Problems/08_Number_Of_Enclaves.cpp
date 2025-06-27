// Problem: https://leetcode.com/problems/number-of-enclaves
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vis,
             vector<vector<int>>& islands, vector<pair<int, int>>& dirs,
             vector<vector<int>>& grid) {
        if (grid[i][j] == 0){
            return;

        }    
        vis[i][j] = 1;
        islands[i][j]=-1;
        int m = grid.size();
        int n = grid[0].size();
        for (auto [di, dj] : dirs) {
            int ni = i + di;
            int nj = j + dj;

            if (ni >= 0 && ni < m && nj >= 0 && nj < n &&
                grid[ni][nj] == 1 && !vis[ni][nj]) {
                dfs(ni, nj, vis, islands, dirs, grid);
            }
        }

    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> islands(m, vector<int>(n));
        vector<vector<int>> vis(m, vector<int>(n));
        vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 1)
                dfs(i, 0, vis, islands, dirs, grid);
            if (grid[i][n - 1] == 1)
                dfs(i, n - 1, vis, islands, dirs, grid);
        }
        for (int i = 1; i < n - 1; i++) {
            if (grid[0][i] == 1)
                dfs(0, i, vis, islands, dirs, grid);
            if (grid[m - 1][i] == 1)
                dfs(m - 1, i, vis, islands, dirs, grid);
        }
        int count=0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j]==1&&islands[i][j] == 0)
                    count++;
            }
        }
        return count;
    }
};