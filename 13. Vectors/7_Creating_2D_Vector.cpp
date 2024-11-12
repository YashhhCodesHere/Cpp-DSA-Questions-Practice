#include <bits/stdc++.h>
using namespace std;

/*
    2D Vector also works the same as 2D Dynamic Array, 
    as it is a vector of vectors, where each vector is a row of the 2D Vector.

    2D Array should must have the same number of columns in each row,
    but in 2D Vector, we can have different number of columns in each row.

    Syntax:-
    vector<vector<datatype>> name = {{1, 2, 3}, {4, 5}, {6, 7, 8}};
*/

int main(){
    // 2D Vector Initialisation:-
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5}, {7, 8, 9}};

    cout << "Value at (2,2) is: " << mat[1][1] << "\n";

    // Printing every element of the 2D Vector:-
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}