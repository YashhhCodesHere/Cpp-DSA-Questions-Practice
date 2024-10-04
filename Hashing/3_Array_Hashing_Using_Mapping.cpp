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

// Pre-Compute:-
map<int, int> mpp;
for(int i = 0; i < n; i++){
    mpp[arr[i]]++;
}

// Iterating the components of map:
for(auto it : mpp){
    cout<< it.first << " -> "<< it.second<<endl;
}

int q;
cout<<"Enter the number of Querries: ";
cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number you want to know, how much time it occurs in array: ";
        // Fetch:-
        cout<<number<< " occurs "<<mpp[number]<<" times in the array!"<<endl;
    }
    return 0;
}