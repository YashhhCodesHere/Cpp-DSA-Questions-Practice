#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int size){
    cout << "Printing array using pointer: ";
    for(int i = 0; i < size; i++){
        cout << *(arr)++ << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);


    // INPUT:-
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    printArray(arr, size);

    // OUTPUT:-
    cout << "Elements of the arrays are: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    int z = 10;
//  arr = z; // Error: As array name is a constant pointer pointing to the first element of the array, so it can't be Modified!
    
    return 0;
}