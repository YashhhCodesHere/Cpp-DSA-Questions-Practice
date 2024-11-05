#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
    cout << "Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {5, 4, 3, 9, 2, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);

    int start = 0, end = n-1;
    while(start < end){
        swap(arr[start++], arr[end--]);

        /*
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
        */
    }

    printArray(arr, n);

    return 0;
}