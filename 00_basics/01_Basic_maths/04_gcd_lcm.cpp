
// Problem: /https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int gcd = __gcd(a, b);              
        int lcm = (a / gcd) * b;             
        return {lcm, gcd};
    }
};