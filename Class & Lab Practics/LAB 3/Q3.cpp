#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return the index of the first occurrence
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int size, element;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to find: ";
    cin >> element;

    int index = findFirstOccurrence(arr, size, element);

    if (index != -1) {
        cout << "The first occurrence of element " << element << " is at index " << index << "." << endl;
    } else {
        cout << "Element " << element << " not found in the array." << endl;
    }

    return 0;
}