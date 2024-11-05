#include <bits/stdc++.h>
using namespace std;

/*
    Array's name is treated internally as a pointer to the first element of the array.
    Arrays are always passed by reference to the function that means the changes made in function will reflect in the original array.
*/

void printArray(int arr[], int n){
//  int size = sizeof(arr) / sizeof(arr[0]); // This will not work here -> as arr is pointer here and sizeof arr will output 8 bytes which is the size of the pointer.

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << *(arr + i) << " ";
    }
    cout << "\n";
} 

// Both of the above functions are same.

// Whenever we pass an array to a function, we must pass the size of the array as well, as we can't get the size of the array inside that function.

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << *arr << "\n"; // arr[0]
    cout << *(arr + 1) << "\n"; // arr[1]
    cout << arr << "\n"; // Address of the first element of the array.

    printArray(arr, n);
    
    return 0;
}