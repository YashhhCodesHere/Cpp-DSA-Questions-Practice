#include <iostream>
using namespace std;

// Time Complexity -> O(n*m)
int bruteForceSearch(int arr[][4], int n, int m, int key){
    cout << "Searching key element '" << key << "' via 'Brute Force Method':-\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == key){
                cout << key << " found at (" << i << ", " << j << ") in the matrix.\n";
                return 1;
            }
        }
    }
    return -1;
}

int main(){
    int mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50} };
    int key = 33;
    
    bruteForceSearch(mat, 4, 4, key);

    return 0;
}       