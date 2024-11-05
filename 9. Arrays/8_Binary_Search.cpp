#include <bits/stdc++.h>
using namespace std;

/*
    Prerequisite: Sorted Array!
    Binary Search is a searching algorithm for finding an element's position in a sorted array.

    The expression 'mid = (start + end) / 2' can lead to integer overflow in some cases,
    so it is better to use (mid = start + (end - start) / 2).
*/

int binarySearch(int *arr, int n, int key){
    int start = 0, end = (n-1);

    while(start <= end){
        int mid = (start + (end - start) / 2);
        if(key == arr[mid]){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1; // Key not found
}


int main()
{
    int arr[] = {2, 6, 13, 21, 36, 47, 63, 81, 97};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 36;

    int result = binarySearch(arr, n, key);

    if(result != -1){
        cout << "Element is found at index: " << result << "\n";
    }else{
        cout << "Element is NOT Present in the array!" << "\n";
    }
    return 0;
}