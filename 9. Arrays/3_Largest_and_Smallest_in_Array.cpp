#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    // Array declaration of size n:-
    int arr[n];

    // Input:-
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Check Largest element in array:-
    int largest = arr[0], smallest = arr[0];
    int largestIndex = 0, smallestIndex = 0;
    for(int i = 1; i < n; i++){
        if(largest < arr[i]){
            largest = arr[i];
            largestIndex = i;
        }
        if(smallest > arr[i]){
            smallest = arr[i];
            smallestIndex = i;
        }
    }

    cout << "Largest Element in the array is: " << largest << " at the index: " << largestIndex << "\n";
    cout << "Smallest Element in the array is: " << smallest << " at the index: " << smallestIndex << "\n";
    
    return 0;
}