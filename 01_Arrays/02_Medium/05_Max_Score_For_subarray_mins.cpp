// Problem: https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int ind=0,max=0;
        for(int i=0;i<arr.size()-1;i++){
            arr[i]+arr[i+1]>max?max=arr[i]+arr[i+1]:max=max;
        }
        return max;
    }
};
