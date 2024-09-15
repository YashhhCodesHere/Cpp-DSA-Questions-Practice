#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24};

    int max_num = arr[0], max_index = 0;
    int min_num = arr[0], min_index = 0;
    for(int i = 0; i < (sizeof(arr)/sizeof(int)); i++){
        if(arr[i] > max_num) {
            max_num = arr[i];
            max_index = i;
        }
        if(arr[i] < min_num) {
            min_num = arr[i];
            min_index = i;
        }
    }
    cout<<"Maximum element of array is: "<< max_num<< " at the index: "<< max_index<<endl;
    cout<<"Minimum element of array is: "<< min_num<< " at the index: "<< min_index<<endl;

    // Swapping the maximum and minimum elements of the array:-
    swap(arr[max_index],arr[min_index]);
    cout<<"Array after swapping the maximum and minimum elements: ";
    for(int i  = 0; i< (sizeof(arr)/sizeof(int)); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}