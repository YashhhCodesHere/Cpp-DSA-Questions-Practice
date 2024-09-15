#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr1 = new int[size];
    cout<<"Enter the element of the 1st array: ";
    for(int i = 0; i < size; i++){
        cin >> arr1[i];
    }

    int* arr2 = new int[size];
    cout<<"Enter the element of the 2nd array: ";
    for(int i = 0; i < size; i++){
        cin >> arr2[i];
    }

    int* arr3 = new int[size];
    int count = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr1[i] == arr2[j]){
                arr3[count++] = arr1[i];
            }
        }
    }
    cout<<"Intersection of the arr1 and arr2 are: ";
    for(int i = 0; i < count; i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}