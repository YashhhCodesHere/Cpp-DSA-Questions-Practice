#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val = 1;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << val++ << " ";
        }
        cout << "\n";
    }
    
    return 0;
}