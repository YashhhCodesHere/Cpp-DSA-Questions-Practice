#include <bits/stdc++.h>
using namespace std;

/*
    Counting Sort is a sorting algorithm where we count the number of occurrences of each element in the array and then place them in the correct order.
    It is efficient when the range of elements is less than the number of elements in the array & all the numbers are positive.
    Uses a frequency count of elements from min to max.

    Time Complexity -> O(n^2)
*/

void countSort(int *arr, int n){
    int freq[100] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
        
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    for(int i = minVal, j = 0; i <= maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
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

    countSort(arr, n);

    cout << "Array after sorting: ";
    display(arr, n);
    cout << "\n";
    return 0;
}

/*

    In counting sort:-
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
    int countingSort(int *arr, int n){
        int max = *max_element(arr, arr+n);
        int min = *min_element(arr, arr+n);
        int range = max - min + 1;
        int count[range] = {0};
        int output[n];

        for(int i = 0; i < n; i++){
            count[arr[i] - min]++;
        }

        for(int i = 1; i < range; i++){
            count[i] += count[i-1];
        }

        for(int i = n-1; i >= 0; i--){
            output[count[arr[i] - min] - 1] = arr[i];
            count[arr[i] - min]--;
        }

        for(int i = 0; i < n; i++){
            arr[i] = output[i];
        }
    }
*/