#include <iostream>

using namespace std;

int main() {
    int m1[10][10], m2[10][10], mul[10][10];
    int r1, c1, r2, c2, i, j, k;

    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter the elements of the first matrix: " << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    cout << "Enter the elements of the second matrix: " << endl;
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> m2[i][j];
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c1; k++) {
                mul[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Display the result
    cout << "Resultant matrix after multiplication: " << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}