#include <bits/stdc++.h>
using namespace std;

int climbingStairs(int n){
    if(n <= 1){
        return 1;
    }
    vector<int> dp(n+1, -1);
    dp[0] = dp[1] = 1;

    for(size_t i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    
    return 0;
}