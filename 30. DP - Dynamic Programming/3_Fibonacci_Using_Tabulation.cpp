#include <bits/stdc++.h>
using namespace std;

/*
    For tabulation(Botton-Up) we have to do the following:-
    1. Define data structure to store the results of subproblems.
    2. Initialize the base cases in that data structure.
    3. Iterate through the data structure in a way that each entry is computed using previously computed entries.
    4. 
*/

int fibonacci(int n){   // O(n)
    if(n <= 1){
        return n;
    }
    vector<int> dp(n+1, 0);     // fib[i] => ith fibonacci
    dp[0] = 0;
    dp[1] = 1;
    for(size_t i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    
    return 0;
}