#include <iostream>
using namespace std;

// Time Complexity -> O(n*log(m))
int binarySearchRow(int row[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (row[mid] == key) {
            return mid;  // Return the column index if key is found
        } else if (row[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // Key not found in the row
}

void searchMatrix(int matrix[][4], int m, int n, int key, int &rowIndex, int &colIndex) {
    for (int i = 0; i < m; i++) {
        int col = binarySearchRow(matrix[i], n, key);
        if (col != -1) {
            rowIndex = i;
            colIndex = col;
            return;
        }
    }
    rowIndex = -1;
    colIndex = -1;
}

int main() {
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int rowIndex, colIndex;
    searchMatrix(matrix, 3, 4, key, rowIndex, colIndex);

    if (rowIndex != -1) {
        cout << "Key " << key << " found at position (" << rowIndex << ", " << colIndex << ")." << endl;
    } else {
        cout << "Key " << key << " not found in the matrix." << endl;
    }

    return 0;
}
