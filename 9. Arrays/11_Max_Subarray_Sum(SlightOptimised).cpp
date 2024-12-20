#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++){
        int currSum = 0;
        for(int j = i; j < n; j++){
            currSum += arr[j];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum Subarray sum: " << maxSum << "\n";
}

int main()
{
    int arr[] = {9, 16, 32, -28, 12, -1, 0, 18, 11, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum(arr, n);
    return 0;
}