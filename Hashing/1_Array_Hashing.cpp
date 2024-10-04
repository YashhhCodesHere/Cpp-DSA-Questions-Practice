#include <bits/stdc++.h>
using namespace std;
// hash is pre-defined in C++ STL, so we can't use it as a variable name.
int hashh[100000000000000];    // Declaring a Hash Table of size 10^14 globally which will not give stack overflow error or segmentation fault.
// Globally, we don't need to initialize the hash table, it will be initialized by 0 by default.
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

    // int hashh[100] = {0};    -> This will give stack overflow error or segmentation fault for large size of array.
    for(int i = 0; i < n; i++){
        hashh[arr[i]] += 1;
    }
    
    int q;
    cout<<"Enter the number of Querries: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number you want to know, how much time it occurs in array: ";
        cin>>number;
        // Fetching result from hash table:-
        cout<<number<< " occurs "<<hashh[number]<<" times in the array!"<<endl;
    }
    return 0;
}