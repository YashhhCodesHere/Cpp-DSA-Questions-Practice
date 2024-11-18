#include <bits/stdc++.h>
using namespace std;

/*
    Quick Sort is also known as Pivot - Partition Approach.(Divide and Conquer)
    Pivot -> Special Index (used to divide the array into two parts)  => We can choose any element as pivot, LAST INDEX is mostly used.

    QUICK SORT ALGORITHM:
    1. Choose a pivot element.
    2. Partition the array around the pivot element.
    3. Recursively apply the above steps to the sub-arrays. -> Quick Sort Function for left and right sub-arrays.
    4. Base Case: If the size of the array is 0 or 1, return.
    5. Combine all the sub-arrays.

    Time Complexity: O(nlogn) -> Average Case, O(n^2) -> Worst Case => When pivot is the smallest or largest element, or when the array is already sorted.
    Space Complexity: O(logn) -> Average Case, O(n) -> Worst Case
*/

int partition(int *arr, int startIdx, int endIdx){
    int pivot = arr[endIdx];    // Choosing the Last Element as Pivot
    int i = startIdx - 1;       // Index of Smaller Element

    for(int j = startIdx; j < endIdx; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[endIdx]);

    return i;    // Now, Pivot Index is i: All elements to the left of i are smaller than pivot and all elements to the right of i are greater than pivot.
}

void quickSort(int *arr, int startIdx, int endIdx){
    if(startIdx >= endIdx){     // Base Case
        return;
    }

    int pivotIdx = partition(arr, startIdx, endIdx);

    quickSort(arr, startIdx, pivotIdx - 1); // Sort the Left Sub-Array
    quickSort(arr, pivotIdx +1, endIdx); // Sort the Right Sub-Array
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

    cout << "Array before Sorting: ";
    printArray(arr, n);

    quickSort(arr, 0, n-1);

    cout << "Array after Sorting: ";
    printArray(arr, n);
    return 0;
}