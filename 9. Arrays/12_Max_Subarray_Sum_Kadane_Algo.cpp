#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "Max Subarray Sum: " << maxSum << "\n";
}

int main()
{
    int arr[] = {9, 16, 32, -28, 12, -1, 0, 18, 11, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum(arr, n);
    return 0;
}