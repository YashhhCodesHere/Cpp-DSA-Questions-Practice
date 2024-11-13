#include <bits/stdc++.h>
using namespace std;

/*
    Big O (Big-Oh!) -> One of the Notations used to represent the Time Complexity of an algorithm.
    It is used to describe the 'upper bound' (Worst Case Scenario) of the running time of an algorithm.
    Ex:- 
    Worst Case Scenario: 1. The element we want to find in an array using linear search is NOT present in the array.
                            Then, we have to traverse the entire array to find the element.
                         2. Whenever we build our website, we always consider the worst-case scenario.
                            Because we don't want our website to crash when a large number of users are using it, not just a few users.
*/

int main(){
    // 1.  Run the program to see the example of solving the Time Complexity using Mathematical Functions:-

    cout << "Calculating Time Complexity using Mathematical Functions:-\n";

    cout << "Ex: 3n^2 + 5n + 2\n\n";

    cout << "Step 1: Remove all the constants\n";
    cout << "       => n^2 + n\n";

    cout << "Step 2: Remove all the lower order (power) terms\n";
    cout << "       => n^2\n";

    cout << "Step 3: Consider the dominating term (Term with the highest power)\n";
    cout << "       => O(n^2)\n\n";

    cout << "So, Here the Time Complexity of the function 3n^2 + 5n + 2 is O(n^2)\n";

    // 2. Run the program to see the example of solving the Time Complexity using Mathematical Formula (Theoritical):-
    cout << "\nCalculating Time Complexity using Mathematical Formula (Theoritical):-\n";

    cout << "Ex: 3n^2 + 4n + 5\n\n";

    cout << "f(n) = 3n^2 + 4n + 5\n&\n";
    cout << "O(g(n)) = n^2\n\n";

    cout << "=> lim  [f(n)/g(n)] = lim [3n^2 + 4n + 5/n^2]\n";
    cout << "  (n->∞)             (n->∞) \n\n";

    cout << "This means BIG OH is related to some function g(n) which is connected to that mathematical function (f(n)) actually!";


    return 0;
}