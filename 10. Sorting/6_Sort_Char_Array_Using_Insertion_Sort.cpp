#include <bits/stdc++.h>
using namespace std;

void insertionSort(char *arr, int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] < curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
}

void display(char *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    char arr[] = {'f', 'a', 'c', 'e', 'b', 'd'};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: ";
    display(arr, n);

    insertionSort(arr, n);

    cout << "Array after sorting: ";
    display(arr, n);

    return 0;
}