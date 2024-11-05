#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";

    int copyArr[n];
    for(int i = n-1; i >= 0; i--){
        static int j = 0;
        copyArr[j++] = arr[i];
    }

    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++){
        arr[i] = copyArr[i];
    }
    
    return 0;
}