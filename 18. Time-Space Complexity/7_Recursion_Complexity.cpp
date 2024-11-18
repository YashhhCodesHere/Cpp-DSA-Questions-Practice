#include <bits/stdc++.h>
using namespace std;

/*
    Recursion Time & Space Complexity can be of 3 types:-
    1. Linear Recursion: T(n) = T(n-1) + O(1)  -> f(n) = f(n-1) + (some constant work)  => Time Complexity: O(n), Space Complexity: O(n)
    2. Divide & Conquer Recursion / Recursion Tree: T(n) = 2T(n/2) + O(1)  -> f(n) = 2*f(n/2) + (some constant work)  => Time Complexity: O(nlogn), Space Complexity: O(logn)

    Time Complexity can be solved by:-
    1. Total Work Done = Recursive Calls + Work Done in Each Call
    2. Solving Recurrence Relation (Mathematically)

    Space Complexity can be solved by:-
    1. Maximum Depth of Recursion Tree * Memory(Space) Used in Each Call(Like making extra arrays, etc)

*/
 
int sumUptoN(int n){
    if(n == 0){
        return 0;
    }
    return n + sumUptoN(n-1);
}
// Time Complexity: O(n), Space Complexity: O(n)
// As we are making (n) recursive calls, for that we occupy (n+1) stack frame and at each call we are using O(1) space

int main(){
    sumUptoN(4);
    return 0;
}