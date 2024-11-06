#include <bits/stdc++.h>
using namespace std;

bool checkDupl(int *arr, int n){
    for(int i = 0; i < n; i++){
        int countI = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                countI += 1;
            }
            if(countI > 1){
                return true;
            }
        }
    }
    return false;
}

//  Optimised:-

bool checkDuplicate(int *arr, int n){
    sort(arr, arr+n);

    for(int i = 0; i < n-1; i++){
        if(arr[i+1] == arr[i]){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 5, 6, 10, 6, 8};
    int n = (sizeof(arr)/sizeof(arr[0]));

    if(checkDuplicate(arr, n)){
        cout << "Array contains DUPLICATE elements!\n";
    }else{
        cout << "Every Elements are distinct in this array!\n";
    }
    return 0;
}