// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrice=prices[0];
        int maxProfit=0;
        for(int i=0;i<n;i++){
            if(minPrice>prices[i]) minPrice=prices[i];
            if(prices[i]-minPrice>maxProfit) maxProfit=prices[i]-minPrice;
        }
        return maxProfit;
    }   
};