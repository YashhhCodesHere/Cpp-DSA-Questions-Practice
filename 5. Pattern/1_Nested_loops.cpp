#include <bits/stdc++.h>
using namespace std;

/* 
    Pattern:-
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
*/

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

//  Outer Loop:-
    for (int i = 1; i <= n; i++){
//  Inner Loop:-
        for (int j = 1; j <= n; j++){
//  Work:-
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}