#include <bits/stdc++.h>
using namespace std;

void print_array(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void changeArr(int *arr, int n, int i){
    if(i == n){
        cout << "Array when base case hits: ";
        print_array(arr, n);
        return;
    }
    arr[i] = i+1;
    changeArr(arr, n, i+1);
    arr[i] -= 2;
}

int main(){
    int arr[5] = {0};
    int n = 5;

    changeArr(arr, n, 0);

    cout << "Array when backtracking ends: ";
    print_array(arr, n);

    return 0;
}