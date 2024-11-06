#include <bits/stdc++.h>
using namespace std;

/*
    Selection Sort is sorting algorithm that is based on the idea of finding the minimum or maximum element in an unsorted array and then putting it in its correct position in a sorted array.
    In this we imagine that the array is divided into two parts: sorted and unsorted!
    then, we select the minimum element from the unsorted array and swap it with the first element of the unsorted array, & continously do this until the array is sorted.

*/

void selectionSort(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
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

    selectionSort(arr, n);

    cout << "Array after sorting: ";
    display(arr, n);
    cout << "\n";
    return 0;
}

/*

    In selection sort:-
    ex:-
    Number of Iterations:-
    n = 0  ->  5 4 2 1 3    : Original Array

    n = 1  ->  1 4 2 5 3
    n = 2  ->  1 2 4 5 3
    n = 3  ->  1 2 3 5 4
    n = 4  ->  1 2 3 4 5    : Sorted Array

*/



/*
    Syntax:-
    int selectionSort(int *arr, int n){
        for(int i=0; i<n-1; i++){
            int min = i;
            for(int j=i+1; j<n; j++){
                if(arr[j] < arr[min]){
                    min = j;
                }
            }
            swap(arr[min], arr[i]);
        }
    }
*/