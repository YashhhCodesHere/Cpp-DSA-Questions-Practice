#include <bits/stdc++.h>
using namespace std;

/*
    Insertion Sort is a sorting algorithm where we start from the second element and compare it with the first element, if the second element is smaller than the first element then we swap them.
    Then, we compare the third element with the second element and if the third element is smaller than the second element then we swap them.
    In short, pick an element from the unsorted array and place it at its correctly in the sorted array.
    Time Complexity -> O(n^2)
*/

void insertionSort(int *arr, int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
}

void display(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {5, 4, 2, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: ";
    display(arr, n);
    cout << "\n";

    insertionSort(arr, n);

    cout << "Array after sorting: ";
    display(arr, n);
    cout << "\n";
    return 0;
}

/*

    In insertion sort:-
    ex:-
    Number of Iterations:-
    n = 0  ->  5 4 2 1 3    : Original Array

    n = 1  ->  4 5 2 1 3
    n = 2  ->  2 4 5 1 3
    n = 3  ->  1 2 4 5 3 
    n = 4  ->  1 2 3 4 5    : Sorted Array
*/



/*
    Syntax:-
    int insertionSort(int *arr, int n){
        for(int i=1; i<n; i++){
            int key = arr[i];
            int j = i-1;
            while(j >= 0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }
*/