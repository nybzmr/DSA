// Problem: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long sumOfDivisors(long long n) {
        long long sum = 0;
        for (long long d = 1; d <= n; d++) {
            sum += d * (n / d);
        }
        return sum;
    }
};
