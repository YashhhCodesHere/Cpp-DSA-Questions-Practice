#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int *arr, int n, int target, int i){
    if(i == (n)){
        return -1;
    }

    if(arr[i] == target){
        return i;
    }
    return firstOccurance(arr, n, target, i+1);
}

int lastOccurance(int *arr, int n, int target, int i){
    if(i == (-1)){
        return -1;
    }

    if(arr[i] == target){
        return i;
    }
    return lastOccurance(arr, n, target, i-1);
}

int main()
{
    int arr[] = {12, 4, 2, 12, 92, 12, 5, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 12;

    int firstOcc = firstOccurance(arr, n, target, 0);
    int lastOcc = lastOccurance(arr, n, target, n-1);

    if(firstOcc == -1){
        cout << "Key is NOT present in the array!\n"; 
    }else{
        cout << "First occurance of Key is at : " << firstOcc << "th index!\n";
    }

    if(lastOcc == -1){
        cout << "Key is NOT present in the array!\n"; 
    }else{
        cout << "First occurance of Key is at : " << lastOcc << "th index!\n";
    }

    return 0;
}