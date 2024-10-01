#include <bits/stdc++.h>
using namespace std;

void reversePairs(int arr[], int size, int pairSize) {
    for (int i = 0; i < size; i += pairSize) {
        for (int j = 0; j < pairSize / 2; ++j) {
            if (i+j < size && (i+pairSize-1-j) < size) {
                swap(arr[i + j], arr[i + pairSize - 1 - j]);
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pairSize = 5; 

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reversePairs(arr, size, pairSize);

    cout << "Array after reversing pairs: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}