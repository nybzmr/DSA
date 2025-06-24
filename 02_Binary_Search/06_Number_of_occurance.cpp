// Problem: https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        vector<int> result(2, -1);
        if (arr.empty()) return 0;

        int left = 0, right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        if (left >= arr.size() || arr[left] != target) {
            return 0;
        }
        result[0] = left;

        right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        result[1] = right;
        
        return result[1]-result[0]+1;
    }
};
