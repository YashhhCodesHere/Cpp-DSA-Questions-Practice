#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int size, int key) {
    if(size<0){
        return -1;
    }
    if(arr[size] == key){
        return size;
    }
    return lastOccurrence(arr, size-1, key);
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
    n--;
    int index = lastOccurrence(num, n, key);
    if (index != -1) {
        cout << "Last occurrence of the key element is at index: " << index << endl;
    } else {
        cout << "Key element not found in the array." << endl;
    }
    return 0;
}