#include <bits/stdc++.h>
using namespace std;

/*
    Heap Sort also use O(nlogn) TC, but our merge sort algo is comparatively more optimised, so we prefer that!
    We use Max Heap for that, and for building it, we call Heapify function for Non-Leaf Elements, for fixing the max-heap properties!
    
    And, we know that for any heap:- (In array of size 'n' )
    Leaf Nodes: [ n/2 - n ] 
    Non-Leaf Nodes: [ 0 - (n/2-1) ]

*/

void heapify(int i, vector<int>& arr, int n){
    int left = (2*i) + 1;
    int right = (2*i) + 2;
    int maxIdx = (i);

    if(left < n && arr[left] < arr[maxIdx]){
        maxIdx = left;
    }

    if(right < n && arr[right] < arr[maxIdx]){
        maxIdx = right;
    }

    if(maxIdx != i){
        swap(arr[i], arr[maxIdx]);
        heapify(maxIdx, arr, n);
    }
}

void heapSort(vector<int>& arr){
    int n = arr.size();

//  Step1: Building Max Heap:-
    for(int i = n/2-1; i >= 0; i--){
        heapify(i, arr, n);
    }

//  Step2: Take largest elements to last position recursively:-
    for(int i = n-1; i >= 0; i--){
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}

int main(){
    vector<int> arr = {10, 15, 5, 20, 9};

    
    return 0;
}