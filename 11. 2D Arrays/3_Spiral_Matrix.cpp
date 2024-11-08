#include <bits/stdc++.h>
using namespace std;

/*
    Whenever we pass a matrix to a function, we need to pass the number of rows and columns as well,
    although we can leave the rows but we must need to pass the column size.
*/

void spiralMatrix(int arr[4][4], int m, int n){
    cout << "Printing Spiral Matrix: ";

    int startRow = 0, startCol = 0;
    int endRow = n - 1, endCol = m - 1;

//  While Loop -> To ensure that we print all elements distinctly:-

    while (startRow <= endRow && startCol <= endCol){
        // Printing Top:
        for (int j = startCol; j <= endCol; j++)
        {
            cout << arr[startRow][j] << " ";
        }
        // Printing Right:
        for (int i = (startRow + 1); i <= endRow; i++)
        {
            cout << arr[i][endCol] << " ";
        }
        // Printing Bottom:
        if(startRow < endRow){
            for (int j = (endCol - 1); j >= startCol; j--)
            {
                cout << arr[endRow][j] << " ";
            }
        }
        // Printing Left:
        if(startCol < endCol){
            for (int i = (endRow - 1); i > startRow; i--)
            {
                cout << arr[i][startCol] << " ";
            }
        }
        startRow++;
        startCol++;
        endRow--;
        endCol--;
    }
}

void printOutput(int arr[][4], int n, int m){
    cout << "The elements of the 2D Array are:-" << "\n";
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    printOutput(mat, 4, 4);

    spiralMatrix(mat, 4, 4);
    return 0;
}

