#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // Using number:-

    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Using Star:
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Using Character:-
    for(int i = 0; i < n;i++){
        char c = 'A';
        for(int j = 0; j < n; j++){
            cout << c << " ";
            c++;
        }
        cout<<endl;
    }

    cout<<endl;

    // Using number continued:-

    int num = 1;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n; j++){
            cout << num++ << " ";
        }
        cout<<endl;
    }

    return 0;
}