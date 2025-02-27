#include <bits/stdc++.h>
using namespace std;

// Here, we used Memoization(Top Down Approach) to solve the Fibonacci problem:-
int fibHelper(int n, vector<int>& dp){
    if(n <= 1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = fibHelper(n-1, dp) + fibHelper(n-2, dp);
    return dp[n];
}

int fib(int n) {
    vector<int> dp(n+1, -1);
    return fibHelper(n, dp);
}

int main(){
    
    return 0;
}

/*
    Basically, when we optimise our recursion code with the help of any other additional data structure where we store it's subproblem's result,
    then it is called as Memoization(Top Down Approach).
*/