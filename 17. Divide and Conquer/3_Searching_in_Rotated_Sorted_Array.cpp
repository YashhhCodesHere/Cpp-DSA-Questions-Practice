#include <bits/stdc++.h>
using namespace std;

int search(int *arr, int startIdx, int endIdx, int target){
    if(startIdx > endIdx){
        return -1;
    }
    int mid = startIdx + (endIdx - startIdx) / 2;
    if(arr[mid] == target){
        return mid;
    }

    if(arr[arr[mid] >= startIdx]){
        if(arr[startIdx] <= target && target <= arr[mid]){      // Check if target lies in the left half
            return search(arr, startIdx, mid-1, target);
        }else{                                                  // Check if target lies in the right half
            return search(arr, mid+1, endIdx, target);
        }
    }else{
        if(arr[mid] <= target && target <= arr[endIdx]){         // Check if target lies in the right half
            return search(arr, mid+1, endIdx, target);
        }else{                                                  // Check if target lies in the left half
            return search(arr, startIdx, mid-1, target);
        }
    }
}

int main(){
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    cout << "Index of " << target << " is: " << search(arr, 0, n-1, target) << "\n";
    return 0;
}