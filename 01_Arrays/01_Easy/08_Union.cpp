// Problem: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        set<int> s;
        for (int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }
        for (int i = 0; i < b.size(); i++) {
            s.insert(b[i]);
        }

        vector<int> v;
        for (auto it : s) { 
            v.push_back(it);
        }
        // return vector with correct order of elements
        return v;
    }
};