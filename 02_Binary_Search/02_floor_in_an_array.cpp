// Problem: https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs(vector<int>& arr, int l, int h, int x) {
        if (l > h) return -1;

        int m = (l + h) / 2;

        if (arr[m] == x) {
            // Check right side for last occurrence
            int res = bs(arr, m + 1, h, x);
            return (res == -1) ? m : res;
        }

        if (arr[m] > x)
            return bs(arr, l, m - 1, x);
        else {
            int res = bs(arr, m + 1, h, x);
            return (res == -1) ? m : res;
        }
    }

    int findFloor(vector<int>& arr, int x) {
        if (x < arr[0]) return -1;
        return bs(arr, 0, arr.size() - 1, x);
    }
};
