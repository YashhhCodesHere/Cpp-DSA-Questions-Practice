#include <bits/stdc++.h>
using namespace std;

/*
    Time Complexity => It is the variation of the running time of an algorithm as the size of the input increases / It is the amount of time taken by an algorithm to run, as a function of input size (n).
                        Graphically, it's a curve that shows how the running time of an algorithm increases as the size of the input increases, & are between the input size and the number of operations.
                        It is denoted by 'O' (Big O notation). -> Worst Case Time Complexity(Upper Bound)

    **Time Complexity is NOT the actual time taken by an algorithm.

    Rules of Calculating Time Complexity:-
    1. Ignore the constants. Except -> O(1) : Constant Time Complexity.
    2. Ignore the lower order terms. -> O(n^2 + n + 1) => O(n^2)
    3. Consider the worst-case scenario.
    4. Consider the dominating term (Term with the highest power).



*/

int main(){
    int n = 1000;

    // O(1) -> Constant Time Complexity:-
    cout << "Hello World!" << endl;

    // O(n) -> Linear Time Complexity:-
    for(int i = 1; i < n; i++){
        cout << i << " ";
    }
    
    return 0;
}