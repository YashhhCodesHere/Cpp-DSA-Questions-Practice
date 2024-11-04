#include <bits/stdc++.h>
using namespace std;

/*
    Arrays are the static linear data structures that are used to store the elements of the same data type.
    Arrays are contiguous blocks of memory.
    The elements of the array are stored in contiguous memory locations.
    The elements of the array can be accessed using the index of the elements, whose starting index is 0.
    The elements of the array can be accessed in O(1) time complexity.
    The Length of the array is fixed, which ranges from 0 to n-1.
*/

int main()
{
//  Array Initialization:-
    int arr[5] = {1, 2, 3, 4, 5}; // all elements are initialized
    int arr1[] = {1, 2, 3, 4, 5}; // size of the array is automatically calculated statically by the compiler at compile time
    int arr2[5] = {0}; // all elements are initialized to 0
    int arr3[5] = {1}; // first element is initialized to 1 and rest are initialized to 0
    int arr4[5]; // no initialization, elements are garbage values   

    int size = sizeof(arr) / sizeof(arr[0]); // Total number of element in array = total size of array / size of first (anyone) element

    cout << sizeof(arr) << " Bytes!" << endl; // Output: 20 (5 * 4 bytes)
    cout << (sizeof(arr) / sizeof(arr[0])) << " total no. of Elements in arr!" << endl; // Output: 5

    return 0;
}

/*
    Syntax:
    data_type array_name[array_size];
    ex: int arr[5]; // array of size 5

    Array Initialization:
    1. int arr[5];  // Output: Garbage values
    2. int arr[5] = {1, 2};     // Output: 1, 2, 0, 0, 0
*/