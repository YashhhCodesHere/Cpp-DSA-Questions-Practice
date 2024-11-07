#include <bits/stdc++.h>
using namespace std;

/*
    Inbuilt Sort is a sorting algorithm that is already implemented in the C++ Standard Template Library (STL).
    It is a hybrid sorting algorithm that uses a combination of Quick Sort, Merge Sort, and Insertion Sort.

    Time Complexity -> O(nlogn)
*/

void display(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Inbuilt Sort by default sorts in ascending order! Although we can change it to descending order by passing a comparator function or logic.

int main()
{
    int arr[] = {4, 2, 5, 3, 1, 9, 7, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: ";
    display(arr, n);

    sort(arr, arr+n);    // For sorting the whole array in ascending order!

    cout << "Array after sorting: ";
    display(arr, n);

    cout << "Sorting array in range 3 to 7: ";
    sort(arr+3, arr+7);    // For sorting a part (Specific Range) of the array!

    display(arr, n);

    cout << "Sorting in descending order: ";
    sort(arr, arr+n, greater<int>());    // For sorting in descending order!

    display(arr, n);


    return 0;
}

/*
    In Inbuilt Sort:-
    ex:-
    Number of Iterations:-
    n = 0  ->  4 2 5 3 1 9 7 6 8    : Original Array

    n = 1  ->  1 2 3 4 5 6 7 8 9    : Sorted Array
*/

/*
    Syntax for Inbuilt Sort:-
    sort(starting_address, ending_address)
    sort(starting_address, ending_address, comparator_function)
*/