// Problem: https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> leaders;
        int n=arr.size();
        int max=-1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=max){
                leaders.push_back(arr[i]);
                max=arr[i];
            }
        }
        reverse(leaders.begin(),leaders.end());
        return leaders;
    }
};