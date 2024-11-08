#include <bits/stdc++.h>
using namespace std;

// Time Complexity -> O(n+m) -> Linear Time Complexity (Optimal Approach):- 
bool staircaseSearch(int arr[4][4], int n, int m, int key){
    int i = 0, j = m-1;
    // While Loop -> For Traversing whole 2D Matrix:-
    while(i < n && j >= 0){
        if(arr[i][j] == key){
            cout << "Key is found at index: (" << i << ", " << j << ")\n";
            return true;
        }else if(arr[i][j] > key){
            j--;
        }else if(arr[i][j] < key){
            i++;
        }
    }
    cout << "Key NOT Found!\n";
    return false;
}

/*
    The above approach's time complexity:-
    when:-
    n >> m -> O(n)
    m >> n -> O(m)
*/

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    staircaseSearch(mat, 4, 4, 11);

    return 0;
}