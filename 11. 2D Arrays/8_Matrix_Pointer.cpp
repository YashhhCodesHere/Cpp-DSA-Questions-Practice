#include <bits/stdc++.h>
using namespace std;

/*
    2D Array's Name behaves as a row pointer -> It is a pointer to the whole single rows of the matrix.
    To get the value of matrix element, we can use the following methods:-
    1. mat[i][j]
    2. **(mat)
    3. *(*(mat + i) + j)
    4. *(mat[i] + j)
*/

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    cout << "Address of 0th Row: " << mat << "\n"; // Address of 0th Row -> Base Address of the 2D Array 
    cout << "Address of 1st Row: " << mat + 1 << "\n";  // Address of 1st Row -> Base Address of the 2D Array + 1 * 4 * sizeof(int) -> 4 * sizeof(int) -> Size of 1 Row
    cout << "\nHere, the increment is of 16 bytes because each integer takes 4 bytes of memory & we have 4 columns here in each row.\n";

    cout << **mat << " == " << mat[0][0] << "\n";
    cout << **(mat+1) << " != " << mat[0][1] << "\n";
    cout << **(mat+1) << " == " << mat[1][0] << "\n";
    return 0;
}