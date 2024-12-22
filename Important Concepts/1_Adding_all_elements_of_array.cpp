#include <bits/stdc++.h>
#include <numeric> // Include accumulate function
using namespace std;

/*
    Syntax of Accumulate function:
    accumulate(starting address, ending address, initial value of sum)
*/

int main(){
    int arr[] = {2, 9, 15, 3, 2};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int sumOfElement = accumulate(arr, arr+n, 0);

    cout << sumOfElement << "\n";

    vector<int> vec(arr, arr+(n/2));    // Copy first half of the array to the vector

    return 0;
}