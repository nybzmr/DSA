// Problem: https://www.geeksforgeeks.org/problems/second-largest3735/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
    int max = -1, ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] > max)
      {
        ans=max;  
        max = arr[i];
      }
      if(arr[i]>ans&&arr[i]!=max){
          ans=arr[i];
      }
    }
    return ans;
  }
};