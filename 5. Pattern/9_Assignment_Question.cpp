#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    // 1. Boolean 0-1 Pattern:-

    for(int i = 0; i < n; i++){
        bool val = (i % 2 == 0);
        for(int j = 0; j < i+1; j++){
            cout << val << " ";
            val = !val;  
        }
        cout << "\n";
    }

    cout << "\n\n";

    // 2. Rhombus Pattern:-

    for(int i = 0; i < n; i++){
        for(int j = n-1; j > i; j--){
            cout << " ";
        }
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n\n";

    // 3. Palindromic Pattern:-

    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        int val = i;
        for(int j = 1; j <= i; j++){
            cout << val--;
        }
        val = 2;
        for(int j = 1; j < i; j++){
            cout << val++;
        }
        cout << "\n";
    }
    
    return 0;
}