#include <bits/stdc++.h>
using namespace std;

/*
    Linear Search is used to find the element in the array, where the array maybe sorted or unsorted.
    It uses O(n) time complexity.
    We return the index of the element if found, else [return -1 -> as the index of the element can't be negative.]
*/

int linearSearch(int *arr, int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {2, 4, 0, 1, 9, 6, 8, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int result = linearSearch(arr, n, key);
    
    (result != -1) ? (cout << "Key is found at the index: " << result << "\n") : (cout <<  "Element NOT found in the array!\n");

    return 0;
}

/*
    Time Complexity is actually a relation between the input size and the number of operations.
*/