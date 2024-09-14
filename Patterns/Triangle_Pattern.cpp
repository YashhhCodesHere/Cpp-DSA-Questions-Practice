#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i = 1; i<=n;i++){
        for(int j = 0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i = 1; i<=n;i++){
        for(int j = 0;j<i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }   

    cout<<endl;

    //  Reverse Triangle Pattern:- 

    for(int i = 1; i<=n;i++){
        for(int j = i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    } 

    cout<<endl;

    // Floyd Triangle Pattern:-

    int num = 1;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    } 

    cout<<endl;

    // Inverted Triangle Pattern:-

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k < i; k++) {
            cout << " ";
        }
        for (int j = i; j <= n; j++) {
            cout << i;
        }
        cout << endl;
    }

    cout << endl;

    // Pyramid Pattern:-

    for(int i = 1; i<=4;i++){
        for(int j = n-i;j>0;j--){
            cout<<" ";
        }
        for(int j =1;j<=i;j++){
            cout<<j;
        }
        for(int j = 1;j<i;j++){
            cout<<j;
        }
        for(int j = n-i;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }

    cout << endl;


    return 0;
}
