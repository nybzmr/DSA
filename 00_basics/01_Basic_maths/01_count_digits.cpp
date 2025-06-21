// Problem: https://www.geeksforgeeks.org/problems/count-digits5716/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int evenlyDivides(int n)
  {
    int count = 0;
    int temp = n;
    while (temp > 0)
    {
      int digit = temp % 10;
      if (digit != 0 && n % digit == 0)
      {
        count++;
      }
      temp /= 10;
    }
    return count;
  }
};