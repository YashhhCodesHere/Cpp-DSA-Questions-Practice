#include <bits/stdc++.h>
using namespace std;

/*
    Sorting is the process of arranging elements in a specific order like ascending or descending.
    Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
    The time complexity of Bubble Sort is O(n^2) in the worst case.
*/

void bubbleSort(int *arr, int n){
    for(int i = 0; i < (n-1); i++){
        for(int j = 0; j < (n-i-1); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
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

    bubbleSort(arr, n);

    cout << "Array after sorting: ";
    display(arr, n);
    cout << "\n";\
    return 0;
}

/*

    In Bubble Sort -> We push the largest element to the end of the array in each iteration.
    ex:-
    Number of Iterations:-
    n = 0  ->  5 4 1 3 2    : Original Array

    n = 1  ->  4 1 3 2 5
    n = 2  ->  1 3 2 4 5
    n = 3  ->  1 2 3 4 5
    n = 4  ->  1 2 3 4 5    : Sorted Array

    So, the array is sorted in 4 iterations.

*/



/*
    Syntax:-
    int bubbleSort(int *arr, int n){
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }
*/