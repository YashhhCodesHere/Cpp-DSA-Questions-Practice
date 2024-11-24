#include <iostream>
using namespace std;

int main() {

    int arr[100];
    int n, pos;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter the '" << i << "'th elements of the array: ";
        cin >> arr[i];
    }

    // Input the position of the element to be deleted
    cout << "Enter the position of the element to be deleted: ";
    cin >> pos;

    // Check if the position is valid
    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
    } else {
        // Shift the elements to the left from the position
        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease the size of the array
        n--;

        // Print the updated array
        cout << "Array after deleting element at position " << pos << ": ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}