#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        // Printing Space:-
        for(int j = n-1; j > i; j--){
            cout << " ";
        }
        // Printing Stars:-
        for(int j = 0; j < (2*i)+1; j++){
            cout << "*";
        }
        cout << "\n";
    }

    for(int i = n; i > 0; i--){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < (2*i)-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}