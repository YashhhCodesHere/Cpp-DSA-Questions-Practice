#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the '" << i << "'th elements of the array: ";
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    int rev_arr[size];
    for(int i=0;i<size;i++){
        rev_arr[i]=arr[size-i-1];
    }
    cout << "\nReversed array: ";
    for (int i = 0; i < size; i++) {
        cout << "The '" << i << "'th elements of the reversed array: ";
        cout << rev_arr[i] << " ";
    }

    return 0;
}