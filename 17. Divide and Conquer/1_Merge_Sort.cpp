#include <bits/stdc++.h>
using namespace std;

/*
    Merge Sort Working:-
    1. Divide the array into two halves.
    2. Recursively sort the two halves.
    3. Merge the two halves.

    Time Complexity: O(nlogn)
    Space Complexity: O(n)
*/

void merge(int arr[], int left, int mid, int right){
    vector<int> temp;
    int i = left; // Initial Index of Left Sub-Array
    int j = mid + 1; // Initial Index of Right Sub-Array

    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    
    // Copy the remaining elements of subarray:- 
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= right){
        temp.push_back(arr[j++]);
    }

    // Copy the Sorted Elements back to Original Array:-
    for(int idx = left, x = 0; idx <= right; idx++){
        arr[idx] = temp[x++];
    }

}

void mergeSort(int arr[], int left, int right){
    // Base Case:-
    if(left >= right){      
        return;   
    }

    int mid = left + (right - left) / 2; // -> To ensure that the mid doesn't exceed the limit of int.(Data Overflow)

    // Divide:-
    mergeSort(arr, left, mid); // Sort the Left Half
    mergeSort(arr, mid+1, right); // Sort the Right Half

    // Conquer:-
    merge(arr, left, mid, right);

}

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n-1);

    printArray(arr, n);
    return 0;
}

/*
    Basically, in 'Divide and Conquer' we divide the problem into smaller sub-problems and then solve the sub-problems, 
    and then combine the solutions of the sub-problems to get the solution of the original problem.
    It is a very powerful recursive algorithmic technique used to solve many problems, & reduce the time complexity.

    Merge Sort & Quick Sort is also based on Divide and Conquer Algorithm.
    It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.
*/


/*
    => Data Overflow:-

    [ left + (right - left) / 2 ] == [ (left + right) / 2 ]
    as:-
    left + (right - left) / 2
    = left + right/2 - left/2
    = left/2 + right/2
    = (left + right) / 2     -> Proved!
*/