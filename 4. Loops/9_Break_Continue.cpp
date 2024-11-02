#include <bits/stdc++.h>
using namespace std;

/* 
    Break: It is used to exit the loop.
    Continue: It is used to skip the current iteration and continue with the next iteration.
*/

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i == 5){
            cout << "(Loop terminated at i = 5)\n";
            break;
        }
        cout << i << " ";
    }
    cout << "\n";

    for(int i = 1; i <= n; i++){
        if(i == 5){
            cout << "(Loop skipped at i = 5)\n";
            continue;
        }
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}