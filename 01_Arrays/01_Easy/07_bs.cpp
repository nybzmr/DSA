// Problem: https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool bs(vector<int>& arr, int l, int u, int k){
        if(l > u) return false;

        int i = l + (u - l) / 2;
        if(arr[i] == k){
            return true;
        }
        else if(arr[i] > k){
            return bs(arr, l, i - 1, k);
        }
        else {
            return bs(arr, i + 1, u, k);
        }
    }

    bool searchInSorted(vector<int>& arr, int k) {
        int n = arr.size();
        return bs(arr, 0, n - 1, k);
    }
};
