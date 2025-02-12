#include <bits/stdc++.h>
using namespace std;

void getUnion(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> us;
    
    // Insert elements of arr1 into set
    for (int num : arr1) {
        us.insert(num);
    }
    
    // Insert elements of arr2 into set
    for (int num : arr2) {
        us.insert(num);
    }

    // Print the union of the two arrays
    for (const auto& i : us) {
        cout << i << " ";
    }
    cout << "\n";
}

void getIntersection(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> us(arr1.begin(), arr1.end()); // Store unique elements of arr1

    // Print the intersection of the two arrays
    for (const auto& i : arr2) {
        if (us.find(i) != us.end()) { // If element is found
            cout << i << " ";
            us.erase(i); // Remove from set to prevent duplicate prints
        }
    }
    cout << "\n";
}

int main(){
    vector<int> arr1 = {7, 1, 5, 2, 3, 6};
    vector<int> arr2 = {3, 8, 6, 20, 7};
    getUnion(arr1, arr2);

    return 0;
}