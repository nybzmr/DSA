// Problem: https://leetcode.com/problems/sprial-matrix
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> s;
        int m = matrix.size();
        int n = matrix[0].size();
        int x = 0, y = 0;
        int a = m, b = n;
        int i = 0, j = 0;

        while (s.size() < m * n) {
            while (j < b && s.size() < m * n) {
                s.push_back(matrix[i][j]);
                j++;
            }
            j--; i++; 

            while (i < a && s.size() < m * n) {
                s.push_back(matrix[i][j]);
                i++;
            }
            i--; j--;

            while (j >= y && s.size() < m * n) {
                s.push_back(matrix[i][j]);
                j--;
            }
            j++; i--;

            while (i > x && s.size() < m * n) {
                s.push_back(matrix[i][j]);
                i--;
            }
            i++; j++;
            x++; y++;
            a--; b--;
        }

        return s;
    }
};
