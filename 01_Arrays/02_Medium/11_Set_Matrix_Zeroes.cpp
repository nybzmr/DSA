// Problem: https://leetcode.com/problems/set-matrix-zeroes/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m= matrix.size();
//         int n=matrix[0].size();
//         vector<pair<int,int>>zeroes;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==0) zeroes.push_back({i,j});
//             }
//         }
//         for(auto p : zeroes){
//             for(int i=0;i<n;i++){
//                 matrix[p.first][i]=0;
//             }
//             for(int i=0;i<m;i++){
//                 matrix[i][p.second]=0;
//             }
//         }
//     }
// };

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        bool firstRowHasZero = false;
        bool firstColHasZero = false;

        // Step 1: Check if first row has any zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowHasZero = true;
                break;
            }
        }

        // Step 2: Check if first column has any zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColHasZero = true;
                break;
            }
        }

        // Step 3: Use first row and column to mark zero rows/columns
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 4: Set cells to zero based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 5: Zero the first row if needed
        if (firstRowHasZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 6: Zero the first column if needed
        if (firstColHasZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
