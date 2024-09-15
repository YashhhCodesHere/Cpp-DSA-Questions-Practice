#include <bits/stdc++.h>
using namespace std;

void arrayReverse(int arr[], int n){
    for(int i = 0; i < n / 2; i++){
        swap(arr[i], arr[n - 1 - i]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; i++){
        cout << "Enter the '" << i << "'th index element of the array: ";
        cin >> arr[i];
    }
    arrayReverse(arr, size);
    delete[] arr;
    return 0;
}