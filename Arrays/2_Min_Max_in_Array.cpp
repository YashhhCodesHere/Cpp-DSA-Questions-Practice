#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24};

    int max_num = arr[0];
    int min_num = arr[0];
    for(int i = 0;i<(sizeof(arr)/sizeof(int));i++){
        max_num = max(max_num,arr[i]);
        min_num = min(min_num,arr[i]);
    }
    cout<<"Maximum element of array is: "<< max_num<<endl;
    cout<<"Minimum element of array is: "<< min_num<<endl;
    return 0;
}