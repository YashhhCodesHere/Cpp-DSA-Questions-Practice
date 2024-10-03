#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key, int index = 0) {
    if (index == size) {
        return -1;
    }
    if (arr[index] == key) {
        return index;
    }
    return firstOccurrence(arr, size, key, index + 1);
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the Key Element: ";
    cin >> key;
    int num[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int index = firstOccurrence(num, n, key);
    if (index != -1) {
        cout << "First occurrence of the key element is at index: " << index << endl;
    } else {
        cout << "Key element not found in the array." << endl;
    }
    return 0;
}