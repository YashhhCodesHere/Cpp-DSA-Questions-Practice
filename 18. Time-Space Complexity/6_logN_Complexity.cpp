#include <bits/stdc++.h>
using namespace std;

/*
    log(n) Complexity is way more efficient than O(n) Complexity.
    It is used in Binary Search, Merge Sort, Quick Sort, Divide and Conquer Algorithms.

    For ex:-    ( log2(10) = 3.32) -> With base=2
    n                    O(n)                        O(log(n))                  Calculations:-
    1000                 1000                         10                        log(10^3) = log(10^3) = 3*log2(10) = 3 * 3.32 = 9.96 ~ 10
    10^6                 10^6                         20                        log(10^6) = log(10^6) = 6*log2(10) = 6 * 3.32 = 19.92 ~ 20
    10^9                 10^9                         30                        log(10^9) = log(10^9) = 9*log2(10) = 9 * 3.32 = 29.88 ~ 30
    10^12                10^12                        40                        log(10^12) = log(10^12) = 12*log2(10) = 12 * 3.32 = 39.84 ~ 40

    So, From here you can see the relation between n and log(n).
*/

int main(){
    // log(n) Complexity:- O(log(n))
    int n = 10;
    for(int i=1; i<=n; i*=2){
        cout<<i<<" ";
    }
    cout<<endl;

    // The above time complexity is of log(n) with base 2, as we are dividing the value of i by 2 in each iteration.
    return 0;
}