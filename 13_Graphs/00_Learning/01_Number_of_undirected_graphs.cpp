// Problem: www.geeksforgeeks.org/problems/graph-and-vertices/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
// User function Template for C++
class Solution {
  public:
    long long count(int n) {
        // your code here
        int max_edge=n*(n-1)/2;
        return pow(2,max_edge);
    }
};