#include <bits/stdc++.h>
using namespace std;

void findDuplicate(vector<int> arr){
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i] == arr[i+1]){
            cout << "Number that occurs twice is: " << (arr[i]) << ".\nThe missing number is: " << (arr[i] + 1) << ".\n";
            return;
        }
    }
    cout << "Didn't found any duplicate number!\n";
}

int main(){
    vector<int> nums = {1, 2, 2, 4};
    findDuplicate(nums);
    return 0;
}