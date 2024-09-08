#include <iostream>
using namespace std;

int main() {

    int arr[100], size, pos, element;

    cout << "Enter the size of the array: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter the '" << i << "'th elements of the array: ";
        cin >> arr[i];
    }

    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;

    cout << "Enter the element to be inserted: ";
    cin >> element;

    // Shifting elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Inserting the element at the specified position
    arr[pos] = element;

    size++; // Increasing the size of the array

    cout << "Array after inserting the element: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}