#include <bits/stdc++.h>
using namespace std;

int countSeven(int arr[][3], int n, int m){
    cout << "The number of times '7' occurs in the matrix are: ";
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 7){
                count++;
            }
        }
    }
    return count;
}

int sumOfSecondRow(int arr[][3], int n, int m){
    cout << "Sum of the elements in the second row is: ";
    int sum = 0;
    for(int j = 0; j < m; j++){
        sum += arr[1][j];
    }
    return sum;
}

void transposeMatrix(int mat[][3], int n, int m){
    cout << "Transpose of a matrix is:-\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << mat[j][i] << " ";
        }
        cout << "\n";
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
    int arr[3][3] = {{4, 7, 8}, 
                     {2, 7, 1}, 
                     {7, 6, 7} };

    // 1. 
    cout << countSeven(arr, 3, 3) << "\n";

    // 2.
    cout << sumOfSecondRow(arr, 3, 3) << "\n";

    // 3.
    transposeMatrix(arr, 3, 3);

    return 0;
}   