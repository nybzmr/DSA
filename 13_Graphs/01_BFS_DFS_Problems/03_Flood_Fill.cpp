// Problem: https://leetcode.com/problems/flood-fill
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vis, vector<vector<int>>& image,
             int colour,int c) {
        image[i][j] = colour;
        vis[i][j] = 1;
        int m = image.size();
        int n = image[0].size();
        vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto [dx, dy] : dirs) {
            int nx = i + dx;
            int ny = j + dy;

            if (nx >= 0 && nx < m && ny >= 0 && ny < n && !vis[nx][ny] && image[nx][ny] == c) {
                dfs(nx, ny, vis, image, colour,c);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>> vis(m, vector<int>(n));
        int c = image[sr][sc];
        dfs(sr, sc, vis, image, color,c);
        return image;
    }
};