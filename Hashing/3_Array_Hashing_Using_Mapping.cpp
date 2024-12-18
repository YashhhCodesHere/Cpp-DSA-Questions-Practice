#include <bits/stdc++.h>
using namespace std;
// Unordered map is preferred over map because it has O(1) time complexity for insertion, deletion and searching.
// Although we can use arrays to store the frequency of each element, but it will take O(n) time complexity for each query.

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
unordered_map<int, int> mpp;  // Declaring a map globally, which will stores the frequency of each element of the array as key-value pair.
for(int i = 0; i < n; i++){
    mpp[arr[i]]++;
}

// Iterating the components of map:
for(auto it : mpp){
    cout<< it.first << " -> "<< it.second<<endl;    // Map is sorted in increasing order of keys, While unordered_map is not sorted.
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