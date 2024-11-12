#include <bits/stdc++.h>
using namespace std;

/*
    We can create a 2D Dynamic Array using the concept of 'Pointers', by making arrays of pointers. -> Row wise allocation.
*/

int main(){
    int rows, cols;
    cout << "Enter the number of rows & columns: ";
    cin >> rows >> cols;

    // Creating a 2D Dynamic Array:-
    int **mat = new int*[rows];

    for(int i = 0; i < rows; i++){
        mat[i] = new int[cols];
    }

    // Initializing the 2D Dynamic Array:-
    for(int i  = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            mat[i][j] = i+j;
            cout << mat[i][j] << " ";
        } 
        cout << "\n";
    }

    // Printing (2,2) element of the 2D Dynamic Array:-
    cout << "Element at (2,2) is: " << mat[1][1] << endl;
    cout << "Element at (2,2) is: " << *(*(mat + 1) + 1) << endl;
    // Both of the above statements are same, due to internal conept of pointer's mathematics used!

    return 0;
}