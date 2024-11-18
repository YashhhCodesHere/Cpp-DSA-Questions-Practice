#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)

int printSum(int n){
    if(n == 1){
        return 1;
    }
    int sum = n + printSum(n-1);

    return sum;
}   

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    cout << "The sum upto (" << n << ") using Recursion is: " << printSum(n) << "\n";

    return 0;
}