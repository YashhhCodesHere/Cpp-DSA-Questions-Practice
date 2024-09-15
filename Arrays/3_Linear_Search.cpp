#include <bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int target, int size){
    cout<<"The index is: ";
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main()
{
    int size, target;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the element you want to search in the array: ";
    cin>>target;
    int arr[size];
    for(int i = 0; i<size;i++){
        cout<<"Enter the '"<<i<<"'th index element of the array: ";
        cin>>arr[i];
    }
    cout<<searchElement(arr, target, size)<< endl;
    return 0;
}