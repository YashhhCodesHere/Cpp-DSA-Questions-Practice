#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> arr, int key){
    int start = 0, end = (arr.size() - 1);
    vector<int> ans;

    while(start <= end){
        if((arr[start] + arr[end]) == key){
            cout << "Pair of index is: (" << start << ", " << end << ")\n"; 
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        if((arr[start] + arr[end]) > key){
            end--;
        }else if((arr[start] + arr[end]) < key){
            start++;
        }
    }
    cout << "Index NOT Found!\n";
    return ans;
}

int main(){
    vector<int> vec = {2, 7, 11, 15};
    int key = 26;

    vector<int> answer = pairSum(vec, key);
    return 0;
}