#include <bits/stdc++.h>
using namespace std;

/*
    We can take input & output in 2D arrays using nested loops which are used to iterate over each cell of 2D array., 
    where:-
    Outer Loop -> Determines Rows
    Inner Loop -> Determines Columns
    
*/

void takeInput(int arr[][3], int n, int m){
    cout << "Enter the elements of the 2D Array: ";
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
}

void printOutput(int arr[][3], int n, int m){
    cout << "The elements of the 2D Array are: ";
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int arr[3][3];
    takeInput(arr, 3, 3);
    printOutput(arr, 3, 3);
    return 0;
}

/*
    2D arrays are generally stored actually linearly in 2 ways in memory:-
    1. Row Major Order:-
        - In this, the elements of the rows are stored in contiguous memory locations.
        - It is used in C/C++.
        - It is comparatively faster.

    2. Column Major Order:-
        - In this, the elements of the columns are stored in contiguous memory locations.
        - It is used in Fortran.
        - It is comparatively slower.

    *However, it's NOT mentioned in the questions -> we assume Row Major Order.

    Ex:-
        1 2 3
        4 5 6
        7 8 9


In Memory:  { Row Major Order:      [ 1 2 3 4 5 6 7 8 9 ] 
            { Column Major Order:   [ 1 4 7 2 5 8 3 6 9 ]

    Formula for calculating address of arr[i][j] in Row Major Order:-
    Address = Base Address + (i * m + j) * size of data type

    Formula for calculating address of arr[i][j] in Column Major Order:-
    Address = Base Address + (j * n + i) * size of data type

    where:-
    - Base Address -> Address of the first element of the array.
    - i -> Row Index
    - j -> Column Index
    - n -> Number of Rows
    - m -> Number of Columns
    - size of data type -> Size of the data type of the array elements.

*/