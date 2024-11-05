#include <bits/stdc++.h>
using namespace std;

int bestBuy(int *prices, int n){
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i < n; i++){
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}

int main(){
    int prices[] = {7, 6, 8, 4, 11};
    int n = sizeof(prices)/sizeof(prices[0]);

    cout << "Maximum Profit: " << bestBuy(prices, n) << "\n";

    return 0;
}