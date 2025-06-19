// Problem: https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largest(vector<int>& arr) {
        int max = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > max) max = arr[i];
        }
        return max;
    }
};
