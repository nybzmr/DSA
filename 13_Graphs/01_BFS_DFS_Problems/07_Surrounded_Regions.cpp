// Problem: https://leetcode.com/problems/surrounded-regions/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vis,
             vector<vector<int>>& capture, vector<pair<int, int>>& dirs,
             vector<vector<char>>& board) {
        if (vis[i][j] == 1)
            return;
        vis[i][j] = 1;
        capture[i][j] = -1;
        int m = board.size();
        int n = board[0].size();
        for (auto [di, dj] : dirs) {
            int ni = i + di;
            int nj = j + dj;

            if (ni >= 0 && ni < m && nj >= 0 && nj < n &&
                board[ni][nj] == 'O' && !vis[ni][nj]) {
                dfs(ni, nj, vis, capture, dirs, board);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> vis(m, vector<int>(n));
        vector<vector<int>> capture(m, vector<int>(n));
        vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        for (int i = 0; i < m; i++) {
            if (board[i][0] == 'O')
                dfs(i, 0, vis, capture, dirs, board);
            if (board[i][n-1] == 'O')
                dfs(i, n - 1, vis, capture, dirs, board);
        }
        for (int i = 1; i < n - 1; i++) {
            if (board[0][i] == 'O')
                dfs(0, i, vis, capture, dirs, board);
            if (board[m-1][i] == 'O')
                dfs(m - 1, i, vis, capture, dirs, board);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (capture[i][j] != -1)
                    board[i][j] = 'X';
            }
        }
    }
};