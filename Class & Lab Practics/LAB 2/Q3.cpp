#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    cout << "Original matrix: " << endl;
    // Print the original matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    // Transpose the matrix in-place
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) { // Note: j starts from i + 1
            swap(arr[i][j], arr[j][i]);
        }
    }
    

    cout << "Transposed matrix: " << endl;
    // Print the transposed matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
