#include <bits/stdc++.h>
using namespace std;

/*
    int larger = max(a, b) -> It is a inbuilt function which returns the maximum of two numbers.
    int smaller = min(a, b) -> It is a inbuilt function which returns the minimum of two numbers.
    
    INT_MIN -> It is a constant in C++ which is a smallest integer value.
    INT_MAX -> It is a constant in C++ which is a largest integer value.
*/

void maxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int currSum = 0;

            for(int i = start; i <= end; i++){
                currSum += arr[i];
            }
            
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum Subarray Sum = " << maxSum << "\n";
}

int main()
{
    int arr[] = {9, 16, 32, -28, 12, -1, 0, 18, 11, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum(arr, n);
    return 0;
}