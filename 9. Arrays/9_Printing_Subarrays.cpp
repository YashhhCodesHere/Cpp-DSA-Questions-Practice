#include <bits/stdc++.h>
using namespace std;

/*
    Subarrays are continous part of the array which can be obtained by fixing the starting point and varying the ending point.
    For example, for the array {1, 6, 8, 12, 2}, subarrays are:
    {1}, {1, 6}, {1, 6, 8}, {1, 6, 8, 12}, {1, 6, 8, 12, 2}, {6}, {6, 8}, {6, 8, 12}, {6, 8, 12, 2}, {8}, {8, 12}, {8, 12, 2}, {12}, {12, 2}, {2}

VVI ->  For n-size array -> Total Number of subarrays = n + (n-1) + (n-2) + ... + 1 = (n*(n+1)/2)
*/

void printSubarrays(int *arr, int n){
    cout << "Printing Subarrays: \n";

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            for(int i = start; i <= end; i++){
                cout << arr[i] << " ";
            }
            cout << ", ";
        }
        cout << "\n";
    }
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printSubarrays(arr, n);

    return 0;
}