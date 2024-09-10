#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter the elements of the array: ";
            cin >> arr[i][j];
        }
    }

    cout << "Sum of each row:" << endl;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    cout << "Sum of each column:" << endl;
    for (int j = 0; j < columns; j++) {
        int columnSum = 0;
        for (int i = 0; i < rows; i++) {
            columnSum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << columnSum << endl;
    }

    return 0;
}