#include <bits/stdc++.h>
using namespace std;

/*
    Matrix Pointers in Functions -> Passing the reference of a 2D array to a function, which is basically a pointer to the row of the matrix.

    So, At the time of passing 2D array to a function as an argurment, we are passing the 'ROW POINTER' to the function, & that's why we need to add the number of columns in the function parameter.
    Hence, here also the matrix is passed by reference only to the function.
*/

void func1(int mat[][3], int n, int m){
    // To print 8 from the matrix using pointer:
    cout << "Value of matrix at i = 2, j = 1 is: " << *(*(mat+2)+1) << endl;

}
void func2(int (*mat)[3], int n, int m){
    cout << "\nFormula to access any element of the matrix using pointer:-\n";
    cout << "mat[i][j] = *(*(mat+i)+j)\n";
}

// Here both of the above functions are same!

int main()
{
    int mat[3][3] = {{1,2,3}, 
                     {4,5,6}, 
                     {7,8,9}};

    func1(mat, 3, 3);
    func2(mat, 3, 3);

    return 0;
}

/*
    Formula to access any element of the matrix using pointer:-
    mat[i][j] = *(*(mat+i)+j)
*/