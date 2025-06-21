// Problem: https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> freq(n, 0);

        for (int i = 0; i < n; i++) {
            freq[arr[i] - 1]++;
        }

        return freq;
    }
};

