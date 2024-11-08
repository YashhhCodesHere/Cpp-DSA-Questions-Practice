#include <bits/stdc++.h>
using namespace std;

// Time Complexity -> O(n^2):-
int diagonalSum(int arr[][4], int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == j){
                sum += arr[i][j];
            }else if(j == n-i-1){
                sum += arr[i][j];
            }
        }
    }
    cout << "Diagonal Sum with Time Complexity -> O(n^2): " << sum << "\n";
    return sum;
}

// Time Complexity -> O(n):-
int diagSum(int arr[][4], int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i][i];
        if(i != (n-i-1)){
            sum += arr[i][n-i-1];
        }
    }
    cout << "Diagonal Sum with Time Complexity -> O(n): " << sum << "\n";
    return sum;
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    diagonalSum(mat, 4, 4);

    diagonalSum(mat, 4, 4);

    return 0;
}