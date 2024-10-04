#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    // Precompute Hash Table:-
    int hash[100] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }
    
    int q;
    cout<<"Enter the number of Querries: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number you want to know, how much time it occurs in array: ";
        cin>>number;
        cout<<number<< " occurs "<<hash[number]<<" times in the array!"<<endl;
    }
    return 0;
}