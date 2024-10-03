#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int size){
    if(arr[size] < arr[size-1]){
        return false;
    }
    sorted(arr, size-1);
    return true;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int num[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>num[i];
    }
    int size = n-1;
    if(sorted(num, size)){
        cout<<"The array is sorted!"<<endl;
    }else{
        cout<<"The array is Not sorted!"<<endl;
    }
    return 0;
}