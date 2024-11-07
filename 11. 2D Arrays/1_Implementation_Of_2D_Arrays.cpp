#include <bits/stdc++.h>
using namespace std;

/*
    2D Arrays are arrays of arrays, used to store multiple data in a tabular form, often called as table/matrix.
    2D arrays can't be directly implemented in C++, but can be implemented using arrays of arrays like below:
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; -> 3x3 2D array
    Games like Tic-Tac-Toe, Chess, Sudoku, etc., are implemented using 2D arrays.
    Although n-D arrays (Multidimentional Arrays) are possible & used in cases like images processing, physics simulations, Machine Learning, etc., but 2D arrays are most common.

*/

int main()
{
    int studentMarks[3][3] = {{94, 88, 77},
                               {99, 97, 95},
                               {100, 98, 96}};
    
    cout << "Student of Roll No. 2, Subject 3: " << studentMarks[1][2] << endl; // 95

    cout << "Student of Roll No. 3, Subject 1: " << studentMarks[2][0] << endl; // 100

    return 0;
}

/*
    In 2D arrays:-
    - int arr[n][m]; -> n = Rows, m = Columns.
    - Rows are horizontal & Columns are vertical.
    - Rows & Columns indexes start from 0.
    - Cells -> Rows x Columns -> Can be accessed using indexes like studentMarks[1][2] -> 95

*/