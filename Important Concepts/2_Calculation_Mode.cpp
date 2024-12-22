#include <bits/stdc++.h>
using namespace std;
// Here, we are calculating the mode of the array without using Hashing technique, or STL Map.

int mode(int *arr, int n){
    vector<int> vec(n, 0);    // Create a vector of size n with all elements as 0.
    for(int i = 0; i < n; i++){
        vec[arr[i]]++;
    }
    int Mode = 0;
    int freq = vec[0];
    for(int i = 1; i < vec.size(); i++){
        if(vec[i] >= freq){
            Mode = i;
            freq = vec[i];
        }
    }
    return Mode;
}

int main(){
    int arr[] = {2, 9, 15, 3, 2, 2, 3, 4, 5, 6, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout << "The mode of the array is: " << mode(arr, n) << "\n";

    return 0;
}