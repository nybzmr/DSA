// Problem: https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int l = 0, u = n - 1;
        int f = -1, c = -1;
        vector<int> ans;

        // Floor
        if (x < arr[0]) {
            ans.push_back(-1);
        } else {
            while (l <= u) {
                int m = (l + u) / 2;
                if (arr[m] == x) {
                    f = m;
                    l = m + 1;  // keep going right for last floor
                } else if (arr[m] < x) {
                    f = m;
                    l = m + 1;
                } else {
                    u = m - 1;
                }
            }
            ans.push_back(arr[f]);
        }

        // Reset for ceil
        l = 0;
        u = n - 1;

        // Ceil
        if (x > arr[n - 1]) {
            ans.push_back(-1);
        } else {
            while (l <= u) {
                int m = (l + u) / 2;
                if (arr[m] == x) {
                    c = m;
                    u = m - 1;  // keep going left for first ceil
                } else if (arr[m] < x) {
                    l = m + 1;
                } else {
                    c = m;
                    u = m - 1;
                }
            }
            ans.push_back(arr[c]);
        }

        return ans;
    }
};
